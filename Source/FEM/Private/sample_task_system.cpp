//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

#include "sample_task_system.h"

#define USE_MULTITHREADING 1

#ifndef SAMPLE_TASK_SYS_ENV_SET
#define USE_TBB 0
#define USE_UE4 0
#define USE_TL  1
#endif

#if USE_UE4

#if USE_MULTITHREADING
#if USE_TBB
#pragma warning(push, 0)
#include "tbb/tbb.h"
#pragma warning(pop)
using namespace tbb;
#endif
#if USE_UE4
#define UE4_ASYNC_TASK  0
#define UE4_TASK_GRAPH  0
#define UE4_QUEUED_WORK 1
#include "AsyncWork.h"
#include "TaskGraphInterfaces.h"
#elif USE_TL
#include "TLJobSystem.h"
using namespace TL;
#endif
#else
#include <stdio.h>
#endif

namespace AMD
{
    int gSampleTaskSystemNumThreads = 1;
#if USE_MULTITHREADING
#if USE_TBB
    task_scheduler_init gSampleTaskSystemInit;
#endif

#if USE_UE4
    FQueuedThreadPool* gSampleTaskSystemQueuedThreadPool;
#endif

    // Task definition
#if USE_TBB
    class TBBTask : public task
    {
    public:
        FmTaskFuncCallback TaskFunc;
        void* taskData;
        int32_t taskBeginIndex;
        int32_t taskEndIndex;

        task* execute()
        {
            TaskFunc(taskData, taskBeginIndex, taskEndIndex);
            return NULL;
        }
    };
#elif USE_UE4
#if UE4_ASYNC_TASK
    class UE4Task : public FNonAbandonableTask
    {
        friend class FAutoDeleteAsyncTask<UE4Task>;
#elif UE4_TASK_GRAPH
    class UE4Task
    {
#elif UE4_QUEUED_WORK
    class UE4Task : public IQueuedWork
    {
#endif
    public:
        FmTaskFuncCallback TaskFunc;
        void* taskData;
        int32_t taskBeginIndex;
        int32_t taskEndIndex;

        UE4Task(FmTaskFuncCallback InTaskFunc, void* inTaskData, int32_t inTaskBeginIndex, int32_t inTaskEndIndex)
        {
            TaskFunc = InTaskFunc;
            taskData = inTaskData;
            taskBeginIndex = inTaskBeginIndex;
            taskEndIndex = inTaskEndIndex;
        }

        static const TCHAR* GetTaskName()
        {
            return TEXT("FEMFX_Task");
        }

#if UE4_ASYNC_TASK
        FORCEINLINE TStatId GetStatId() const
        {
            RETURN_QUICK_DECLARE_CYCLE_STAT(UE4Task, STATGROUP_ThreadPoolAsyncTasks);
        }

        void DoWork()
        {
            TaskFunc(taskData, taskBeginIndex, taskEndIndex);
        }
#elif UE4_TASK_GRAPH
        FORCEINLINE static TStatId GetStatId()
        {
            RETURN_QUICK_DECLARE_CYCLE_STAT(UE4Task, STATGROUP_TaskGraphTasks);
        }

        static ENamedThreads::Type GetDesiredThread()
        {
            return ENamedThreads::AnyHiPriThreadHiPriTask;
        }

        static ESubsequentsMode::Type GetSubsequentsMode()
        {
            return ESubsequentsMode::FireAndForget;
        }

        void DoTask(ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent)
        {
            TaskFunc(taskData, taskBeginIndex, taskEndIndex);
        }
#elif UE4_QUEUED_WORK
        void Abandon()
        {
        }

        void DoThreadedWork()
        {
            TaskFunc(taskData, taskBeginIndex, taskEndIndex);

            FMemory::Free(this);
            //delete this;
        }
#endif
    };
#endif
#endif

    void SampleInitTaskSystem(int numThreads)
    {
        if (numThreads == 0)
        {
            gSampleTaskSystemNumThreads = SampleGetTaskSystemDefaultNumThreads();
        }
        else
        {
            gSampleTaskSystemNumThreads = numThreads;
        }
#if USE_MULTITHREADING
#if USE_TBB
        gSampleTaskSystemInit.terminate();
        gSampleTaskSystemInit.initialize(gSampleTaskSystemNumThreads);
#endif
#if USE_UE4
        gSampleTaskSystemQueuedThreadPool = FQueuedThreadPool::Allocate();
        gSampleTaskSystemQueuedThreadPool->Create(gSampleTaskSystemNumThreads, 32 * 1024, EThreadPriority::TPri_TimeCritical);

#if UE4_ASYNC_TASK
        gSampleTaskSystemNumThreads = GThreadPool->GetNumThreads();
#elif UE4_TASK_GRAPH
        gSampleTaskSystemNumThreads = FTaskGraphInterface::Get().GetNumWorkerThreads();
#elif UE4_QUEUED_WORK
        gSampleTaskSystemNumThreads = gSampleTaskSystemQueuedThreadPool->GetNumThreads();
#endif
#elif USE_TL
        TLJobSystem::Create(numThreads, 0);
        gSampleTaskSystemNumThreads = numThreads;
#endif
#else
        (void)numThreads;
#endif
    }

    void SampleDestroyTaskSystem()
    {
#if USE_UE4
        gSampleTaskSystemQueuedThreadPool->Destroy();
        delete gSampleTaskSystemQueuedThreadPool;
        gSampleTaskSystemQueuedThreadPool = NULL;
#elif USE_TL
        TLJobSystem::Destroy();
#endif
    }

    void SampleWaitForAllThreadsToStart()
    {
#if USE_TL
        TLJobSystem::Get()->WaitForAllWorkersToStart();
#endif
    }

    int SampleGetTaskSystemNumThreads()
    {
        return gSampleTaskSystemNumThreads;
    }

    int SampleGetTaskSystemDefaultNumThreads()
    {
#if USE_MULTITHREADING
#if USE_TBB
        return gSampleTaskSystemInit.default_num_threads();
#elif USE_UE4
#if UE4_ASYNC_TASK
        return GThreadPool->GetNumThreads();
#elif UE4_TASK_GRAPH
        return FTaskGraphInterface::Get().GetNumWorkerThreads();
#elif UE4_QUEUED_WORK
        return 7;// 16;
#endif
#else
        return TLJobSystem::GetDefaultNumWorkerThreads();
#endif
#else
        return 1;
#endif
    }

    // Return index of current worker thread, >= 0 and < numThreads specified to SampleInitTaskSystem(), unique between workers running concurrently.
    // Returns -1 if number of workers exceeds numThreads.
    int SampleGetTaskSystemWorkerIndex()
    {
#if USE_MULTITHREADING
#if USE_TBB
        return this_task_arena::current_thread_index();
#elif USE_UE4
#error "Not implemented"
#elif USE_TL
        TLJobSystem* jobSys = TLJobSystem::Get();
        return jobSys->GetWorkerIndex();
#endif
#else
        return 0;
#endif
    }

#if SAMPLE_ASYNC_THREADING
    void SampleAsyncTask(const char* taskName, FmTaskFuncCallback TaskFunc, void* taskData, int32_t taskBeginIndex, int32_t taskEndIndex)
    {
        (void)taskName;
#if USE_MULTITHREADING
#if USE_TBB
        TBBTask* tbbTask = new(task::allocate_root()) TBBTask;

        tbbTask->TaskFunc = TaskFunc;
        tbbTask->taskData = taskData;
        tbbTask->taskBeginIndex = taskBeginIndex;
        tbbTask->taskEndIndex = taskEndIndex;

        task::spawn(*(task *)tbbTask);
#elif USE_UE4
#if UE4_ASYNC_TASK
        (new FAutoDeleteAsyncTask<UE4Task>(TaskFunc, taskData, taskBeginIndex, taskEndIndex))->StartBackgroundTask();
#elif UE4_TASK_GRAPH
        TGraphTask<UE4Task>::CreateTask(NULL, ENamedThreads::AnyThread).ConstructAndDispatchWhenReady(TaskFunc, taskData, taskBeginIndex, taskEndIndex);
#elif UE4_QUEUED_WORK

        void* mem = FMemory::Malloc(sizeof(UE4Task), alignof(UE4Task));
        
        UE4Task* task = new (mem) UE4Task(TaskFunc, taskData, taskBeginIndex, taskEndIndex);

        return gSampleTaskSystemQueuedThreadPool->AddQueuedWork(task);
#endif
#elif USE_TL
        TLJob job;
        job.func = TaskFunc;
        job.data = taskData;
        job.beginIndex = taskBeginIndex;
        job.endIndex = taskEndIndex;

        TLJobSystem* jobSys = TLJobSystem::Get();
        jobSys->SubmitJobAtEnd(job);
#endif
#else
        TaskFunc(taskData, taskBeginIndex, taskEndIndex);
#endif
    }

    FmSyncEvent* SampleCreateSyncEvent()
    {
#if USE_MULTITHREADING
#if USE_TBB
        task* waitTask = new(task::allocate_root()) empty_task;
        waitTask->set_ref_count(2);
        return (void *)waitTask;
#elif USE_UE4
        FEvent* taskEvent = FGenericPlatformProcess::GetSynchEventFromPool(false);
        taskEvent->Reset();
        return taskEvent;
#elif USE_TL
        TLCounter* taskCounter = new TLCounter();
        taskCounter->Increment();
        return taskCounter;
#endif
#else
        bool* eventFlag = new bool(false);
        return eventFlag;
#endif
    }

    void SampleDestroySyncEvent(FmSyncEvent* taskEvent)
    {
#if USE_MULTITHREADING
#if USE_TBB
        task* waitTask = (task*)taskEvent;
        waitTask->destroy(*waitTask);
#elif USE_UE4
        FEvent* ueEvent = (FEvent*)taskEvent;
        FGenericPlatformProcess::ReturnSynchEventToPool(ueEvent);
#elif USE_TL
        TLCounter* taskCounter = (TLCounter*)taskEvent;
        delete taskCounter;
#endif
#else
        bool* eventFlag = (bool *)taskEvent;
        delete eventFlag;
#endif
    }

    void SampleWaitForSyncEvent(FmSyncEvent* taskEvent)
    {
#if USE_MULTITHREADING
#if USE_TBB
        task* waitTask = (task*)taskEvent;
        waitTask->wait_for_all();
#elif USE_UE4
        FEvent* ueEvent = (FEvent*)taskEvent;
        ueEvent->Wait();
#elif USE_TL
        TLCounter* taskCounter = (TLCounter*)taskEvent;
        taskCounter->WaitUntilZero();
#endif
#else
        bool* eventFlag = (bool *)taskEvent;
        while (*eventFlag == false)
        {
            printf("Event flag not set\n");
        }
#endif
    }

    void SampleTriggerSyncEvent(FmSyncEvent* taskEvent)
    {
#if USE_MULTITHREADING
#if USE_TBB
        task* waitTask = (task*)taskEvent;
        waitTask->decrement_ref_count();
#elif USE_UE4
        FEvent* ueEvent = (FEvent*)taskEvent;
        ueEvent->Trigger();
#elif USE_TL
        TLCounter* taskCounter = (TLCounter*)taskEvent;
        taskCounter->Decrement();
#endif
#else
        bool* eventFlag = (bool *)taskEvent;
        *eventFlag = true;
#endif
    }
#endif

#if (!SAMPLE_ASYNC_THREADING || SAMPLE_LEGACY_THREADING) && USE_TBB  // only TBB supported for non-async interface
    FmTaskWaitCounter* SampleCreateTaskWaitCounter()
    {
#if USE_MULTITHREADING
        task* waitTask = new(task::allocate_root()) empty_task;
        waitTask->set_ref_count(1);
        return (void *)waitTask;
#else
        return NULL;
#endif
    }

    void SampleWaitForTaskWaitCounter(FmTaskWaitCounter* counter)
    {
#if USE_MULTITHREADING
        task* waitTask = (task*)counter;
        waitTask->wait_for_all();
#else
        (void)counter;
#endif
    }

    void SampleDestroyTaskWaitCounter(FmTaskWaitCounter* counter)
    {
#if USE_MULTITHREADING
        task* waitTask = (task*)counter;
        waitTask->destroy(*waitTask);
#else
        (void)counter;
#endif
    }

    void SampleSubmitTask(const char* taskName, FmTaskFuncCallback TaskFunc, void* taskData, int32_t taskBeginIndex, int32_t taskEndIndex, FmTaskWaitCounter* waitCounter)
    {
        (void)taskName;
#if USE_MULTITHREADING
        TBBTask* tbbTask;
        if (waitCounter)
        {
            task* waitTask = (task*)waitCounter;
            waitTask->increment_ref_count();

            tbbTask = new(waitTask->allocate_child()) TBBTask;
        }
        else
        {
            tbbTask = new(task::allocate_root()) TBBTask;
        }

        tbbTask->TaskFunc = TaskFunc;
        tbbTask->taskData = taskData;
        tbbTask->taskBeginIndex = taskBeginIndex;
        tbbTask->taskEndIndex = taskEndIndex;

        task::spawn(*(task *)tbbTask);
#else
        (void)waitCounter;
        TaskFunc(taskData, taskIndex);
#endif
    }

    void SampleParallelFor(const char* taskName, FmTaskFuncCallback TaskFunc, void *taskData, int32_t taskCount)
    {
        (void)taskName;
#if USE_MULTITHREADING
        if (taskCount > 0)
        {
            tbb::parallel_for((int32_t)0, (int32_t)taskCount, [=](int32_t i) {
                TaskFunc(taskData, i, i + 1);
            });
        }
#else
        for (int i = 0; i < taskCount; i++)
        {
            TaskFunc(taskData, i, i + 1);
        }
#endif
    }
#endif
}

#endif

