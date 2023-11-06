//-------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//-------------------------------------------------------------------------------------
#pragma once

#include <vector>

#include "FEMCommon.h"

class FEMConnectivity
{
public:
    static void AddIncidentTetToSet(std::vector<AMD::uint>& vertTetIds, AMD::uint tetId);
};