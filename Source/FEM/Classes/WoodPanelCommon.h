//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#define SU_BOX_NUM_FLOATS_PER_VERTEX (3 + 3 + 2)
#define SU_BOX_NUM_VERTICES          24
#define SU_BOX_NUM_INDICES           (12 * 3)

#define PANEL_WIDTH 3.0f
#define PANEL_HEIGHT 4.0f
#define PANEL_DEPTH 0.2f


static const int32 g_numShardsX = 200;
static const int32 g_numShardsY = 9;
static const int32 g_numShardsZ = 2;
static const int32 g_numShardsPerPanel = g_numShardsX * g_numShardsY * g_numShardsZ;
static const int32 g_numShardCornerVerts = g_numShardsPerPanel * 8;

static const float g_boxSizeX = PANEL_WIDTH / g_numShardsX;
static const float g_boxSizeY = PANEL_HEIGHT / g_numShardsY;
static const float g_boxSizeZ = 0.8f*(PANEL_DEPTH / g_numShardsZ);
static const float g_boxMinX = -g_boxSizeX * 0.5f;
static const float g_boxMaxX = g_boxSizeX * 0.5f;
static const float g_boxMinY = -g_boxSizeY * 0.5f;
static const float g_boxMaxY = g_boxSizeY * 0.5f;
static const float g_boxMinZ = -g_boxSizeZ * 0.5f;
static const float g_boxMaxZ = g_boxSizeZ * 0.5f;


static float                   g_shardTempYValues[g_numShardsX][g_numShardsY + 1][g_numShardsZ][4];

static float g_pfVertexData[SU_BOX_NUM_FLOATS_PER_VERTEX * SU_BOX_NUM_VERTICES] =
{
	// Positions          Normals              Textures

	// bottom (-Y)
	g_boxMinX, g_boxMinY, g_boxMinZ,  0.0f, -1.0f, 0.0f,   0.0f, 0.0f,
	g_boxMinX, g_boxMinY, g_boxMaxZ,  0.0f, -1.0f, 0.0f,   0.0f, 1.0f,
	g_boxMaxX, g_boxMinY, g_boxMaxZ,  0.0f, -1.0f, 0.0f,   1.0f, 1.0f,
	g_boxMaxX, g_boxMinY, g_boxMinZ,  0.0f, -1.0f, 0.0f,   1.0f, 0.0f,

	// top (+Y)
	g_boxMinX, g_boxMaxY, g_boxMinZ,  0.0f, 1.0f, 0.0f,   1.0f, 0.0f,
	g_boxMinX, g_boxMaxY, g_boxMaxZ,  0.0f, 1.0f, 0.0f,   1.0f, 1.0f,
	g_boxMaxX, g_boxMaxY, g_boxMaxZ,  0.0f, 1.0f, 0.0f,   0.0f, 1.0f,
	g_boxMaxX, g_boxMaxY, g_boxMinZ,  0.0f, 1.0f, 0.0f,   0.0f, 0.0f,

	// back (-Z)
	g_boxMinX, g_boxMinY, g_boxMinZ,  0.0f, 0.0f, -1.0f,   0.0f, 0.0f,
	g_boxMinX, g_boxMaxY, g_boxMinZ,  0.0f, 0.0f, -1.0f,   0.0f, 1.0f,
	g_boxMaxX, g_boxMaxY, g_boxMinZ,  0.0f, 0.0f, -1.0f,   1.0f, 1.0f,
	g_boxMaxX, g_boxMinY, g_boxMinZ,  0.0f, 0.0f, -1.0f,   1.0f, 0.0f,

	// front (+Z)
	g_boxMinX, g_boxMinY, g_boxMaxZ,  0.0f, 0.0f, 1.0f,   0.0f, 0.0f,
	g_boxMinX, g_boxMaxY, g_boxMaxZ,  0.0f, 0.0f, 1.0f,   0.0f, 1.0f,
	g_boxMaxX, g_boxMaxY, g_boxMaxZ,  0.0f, 0.0f, 1.0f,   1.0f, 1.0f,
	g_boxMaxX, g_boxMinY, g_boxMaxZ,  0.0f, 0.0f, 1.0f,   1.0f, 0.0f,

	// other back (-X)
	g_boxMinX, g_boxMinY, g_boxMinZ,  -1.0f, 0.0f, 0.0f,   0.0f, 0.0f,
	g_boxMinX, g_boxMinY, g_boxMaxZ,  -1.0f, 0.0f, 0.0f,   0.0f, 1.0f,
	g_boxMinX, g_boxMaxY, g_boxMaxZ,  -1.0f, 0.0f, 0.0f,   1.0f, 1.0f,
	g_boxMinX, g_boxMaxY, g_boxMinZ,  -1.0f, 0.0f, 0.0f,   1.0f, 0.0f,

	// other front (+X)
	g_boxMaxX, g_boxMinY, g_boxMinZ,  1.0f, 0.0f, 0.0f,   0.0f, 0.0f,
	g_boxMaxX, g_boxMinY, g_boxMaxZ,  1.0f, 0.0f, 0.0f,   0.0f, 1.0f,
	g_boxMaxX, g_boxMaxY, g_boxMaxZ,  1.0f, 0.0f, 0.0f,   1.0f, 1.0f,
	g_boxMaxX, g_boxMaxY, g_boxMinZ,  1.0f, 0.0f, 0.0f,   1.0f, 0.0f,
};

static uint16 g_pnIndexData[SU_BOX_NUM_INDICES] =
{
	0, 2, 1,     // -Y quad
	0, 3, 2,

	4, 5, 6,     //  Y quad
	4, 6, 7,

	8, 9, 10,     // -Z quad
	8, 10, 11,

	12, 15, 14,     //  Z quad
	12, 14, 13,

	16, 17, 18,     // -X quad
	16, 18, 19,

	20, 23, 22,     //  X quad
	20, 22, 21
};
