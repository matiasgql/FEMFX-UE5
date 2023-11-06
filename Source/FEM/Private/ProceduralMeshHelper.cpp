//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "ProceduralMeshHelper.h"
#include "AMD_FEMFX.h"
#include "FEMConnectivity.h"


namespace ProceduralMeshHelper
{

	void InitBlockVerts(AMD::FmVector3* vertRestPositions, AMD::FmTetVertIds* tetVertIds, bool Randomize, float CubeX, float CubeY, float CubeZ, int NumCubesX, int NumCubesY, int NumCubesZ, float Scale)
	{
		int numCubesX = NumCubesX;
		int numCubesY = NumCubesY;
		int numCubesZ = NumCubesZ;

		for (int i = 0; i < numCubesX + 1; i++)
		{
			float biasY = 0.2f*CubeY*randfloat2();

			for (int k = 0; k < numCubesZ + 1; k++)
			{
				for (int j = 0; j < numCubesY + 1; j++)
				{
					int v0 = (i + j * (numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));

					float x = CubeX * i;
					float y = CubeY * j;
					float z = -CubeZ * k;

					if (Randomize)
					{
						if (i > 0 && i < numCubesX)
						{
							x += 0.2f*CubeX*randfloat2();

							if (x < 0.0f)
							{
								x = 0.0f;
							}
							if (x > CubeX * numCubesX)
							{
								x = CubeX * numCubesX;
							}
						}

						if (j > 0 && j < numCubesY)
						{
							y += 0.2f*CubeY*randfloat2() + biasY;

							if (y < 0.0f)
							{
								y = 0.0f;
							}
							if (y > CubeY * numCubesY)
							{
								y = CubeY * numCubesY;
							}
						}
					}

					vertRestPositions[v0] = AMD::FmInitVector3(x, y, z) * Scale;
				}
			}
		}

		for (int k = 0; k < numCubesZ; k++)
		{
			for (int j = 0; j < numCubesY; j++)
			{
				for (int i = 0; i < numCubesX; i++)
				{
					int v0 = (i + j * (numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v1 = ((i + 1) + j * (numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v2 = ((i + 1) + j * (numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));
					int v3 = (i + j * (numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));
					int v4 = (i + (j + 1)*(numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v5 = ((i + 1) + (j + 1)*(numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v6 = ((i + 1) + (j + 1)*(numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));
					int v7 = (i + (j + 1)*(numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));

					int tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY));
					tetVertIds[tetId].ids[0] = v0;
					tetVertIds[tetId].ids[1] = v1;
					tetVertIds[tetId].ids[2] = v3;
					tetVertIds[tetId].ids[3] = v4;

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 1;
					tetVertIds[tetId].ids[0] = v1;
					tetVertIds[tetId].ids[1] = v3;
					tetVertIds[tetId].ids[2] = v4;
					tetVertIds[tetId].ids[3] = v5;

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 2;
					tetVertIds[tetId].ids[0] = v3;
					tetVertIds[tetId].ids[1] = v5;
					tetVertIds[tetId].ids[2] = v7;
					tetVertIds[tetId].ids[3] = v4;

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 3;
					tetVertIds[tetId].ids[0] = v1;
					tetVertIds[tetId].ids[1] = v2;
					tetVertIds[tetId].ids[2] = v3;
					tetVertIds[tetId].ids[3] = v5;

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 4;
					tetVertIds[tetId].ids[0] = v3;
					tetVertIds[tetId].ids[1] = v2;
					tetVertIds[tetId].ids[2] = v7;
					tetVertIds[tetId].ids[3] = v5;

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 5;
					tetVertIds[tetId].ids[0] = v2;
					tetVertIds[tetId].ids[1] = v7;
					tetVertIds[tetId].ids[2] = v5;
					tetVertIds[tetId].ids[3] = v6;
				}
			}
		}
	}


	void CreateBlockMesh(std::vector<AMD::uint>* vertIncidentTets, int NumCubesX, int NumCubesY, int NumCubesZ)
	{

		AMD::uint numCubesX = NumCubesX;
		AMD::uint numCubesY = NumCubesY;
		AMD::uint numCubesZ = NumCubesZ;

		for (AMD::uint k = 0; k < numCubesZ; k++)
		{
			for (AMD::uint j = 0; j < numCubesY; j++)
			{
				for (AMD::uint i = 0; i < numCubesX; i++)
				{
					int v0 = (i + j * (numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v1 = ((i + 1) + j * (numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v2 = ((i + 1) + j * (numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));
					int v3 = (i + j * (numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));
					int v4 = (i + (j + 1)*(numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v5 = ((i + 1) + (j + 1)*(numCubesX + 1) + k * (numCubesX + 1)*(numCubesY + 1));
					int v6 = ((i + 1) + (j + 1)*(numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));
					int v7 = (i + (j + 1)*(numCubesX + 1) + (k + 1)*(numCubesX + 1)*(numCubesY + 1));

					int tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY));
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v0], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v1], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v3], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v4], tetId);

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 1;
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v1], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v3], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v4], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v5], tetId);

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 2;
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v3], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v5], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v7], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v4], tetId);

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 3;
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v1], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v2], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v3], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v5], tetId);

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 4;
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v3], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v2], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v7], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v5], tetId);

					tetId = 6 * (i + j * numCubesX + k * (numCubesX*numCubesY)) + 5;
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v2], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v7], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v5], tetId);
					FEMConnectivity::AddIncidentTetToSet(vertIncidentTets[v6], tetId);
				}
			}
		}
	}
}