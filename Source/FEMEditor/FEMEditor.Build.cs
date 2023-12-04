//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

using UnrealBuildTool;

public class FEMEditor : ModuleRules
{
	public FEMEditor(ReadOnlyTargetRules Target) : base(Target)
	{
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