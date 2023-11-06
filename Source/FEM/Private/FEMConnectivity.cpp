//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

#include "FEMConnectivity.h"
#include "AMD_FEMFX.h"
//#include "../../FEMLib/FEMFXBeta/amd_femfx/inc/AMD_FEMFX.h"

void FEMConnectivity::AddIncidentTetToSet(std::vector<AMD::uint>& vertTetIds, AMD::uint tetId)//, AMD::uint Offset, AMD::uint Pitch)
{
    /*for (int i = 0; i < Pitch; ++i)
    {
        AMD::uint vTetId = vertTetIds[i];
        if (vTetId == tetId)
        {
            return;
        }
    }*/

    for (std::vector<AMD::uint>::iterator it = vertTetIds.begin(); it != vertTetIds.end(); it++)
    {
        AMD::uint vTetId = *it;
        if (vTetId == tetId)
            return;
    }
    vertTetIds.push_back(tetId);
}

