//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

#pragma once

#define SAMPLE_ASYNC_THREADING 1
#define SAMPLE_LEGACY_THREADING 0

#include <stdint.h>

namespace AMD
{
    typedef void(*FmTaskFuncCallback)(void* taskData, int32_t taskBeginIndex, int32_t taskEndIndex);

    // Task system initialization
    void SampleInitTaskSystem(int numThreads);
    void SampleDestroyTaskSystem();

    int SampleGetTaskSystemNumThreads();
    int SampleGetTaskSystemDefaultNumThreads();

    void SampleWaitForAllThreadsToStart();

    // Return index of current worker thread, between 0 and numThreads-1, unique between workers running concurrently
    int SampleGetTaskSystemWorkerIndex();

#if SAMPLE_ASYNC_THREADING
    typedef void FmSyncEvent;

    // Submit asynchronous task to task scheduler, which should run TaskFunc, taskData and taskIndex arguments
    void SampleAsyncTask(const char* taskName, FmTaskFuncCallback TaskFunc, void *taskData, int32_t taskBeginIndex, int32_t taskEndIndex);

    // Create task event
    FmSyncEvent* SampleCreateSyncEvent();

    // Destroy task event
    void SampleDestroySyncEvent(FmSyncEvent* taskEvent);

    // Wait for task event to be triggered
    void SampleWaitForSyncEvent(FmSyncEvent* taskEvent);

    // Trigger task event
    void SampleTriggerSyncEvent(FmSyncEvent* taskEvent);
#endif

#if !SAMPLE_ASYNC_THREADING || SAMPLE_LEGACY_THREADING
    typedef void FmTaskWaitCounter;

    // Create counter with count indicating unblocked
    FmTaskWaitCounter* SampleCreateTaskWaitCounter();

    // Wait on counter
    void SampleWaitForTaskWaitCounter(FmTaskWaitCounter* counter);

    // Destroy counter
    void SampleDestroyTaskWaitCounter(FmTaskWaitCounter* counter);

    // Submit task to task scheduler which runs TaskFunc with taskData and taskIndex arguments.
    // If waitCounter non-NULL, this call will increment counter, and task will decrement on completion
    void SampleSubmitTask(const char* taskName, FmTaskFuncCallback TaskFunc, void* taskData, int32_t taskBeginIndex, int32_t taskEndIndex, FmTaskWaitCounter* waitCounter);

    void SampleParallelFor(const char* taskName, FmTaskFuncCallback TaskFunc, void* taskData, int32_t taskCount);
#endif
}
