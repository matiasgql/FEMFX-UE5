//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

using System;
using System.IO;
using UnrealBuildTool;

public class FEMEditor : ModuleRules
{
	public FEMEditor(ReadOnlyTargetRules Target) : base(Target)
	{

		//DynamicallyLoadedModuleNames.AddRange(
		//	new string[] {
		//		"AssetTools"
		//	}
		//);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"FEM",
				"Core",
				"CoreUObject",
				"Engine",
				"ProceduralMeshComponent",
				"UnrealEd",
				"Slate",
				"SlateCore",
				"AssetTools",
				"Json",
				"JsonUtilities",
				"EditorStyle",
				"MainFrame",
				"InputCore"
			}
		);

		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"AssetTools"
			});

		PrivateIncludePaths.AddRange(
			new string[] {
				"FEMEditor/Private",
				"FEMEditor/Classes",
			}
		);

	}
}