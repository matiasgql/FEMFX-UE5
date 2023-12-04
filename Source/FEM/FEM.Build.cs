// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class FEM : ModuleRules
{
	public FEM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		string PluginPath = Path.Combine(ModuleDirectory, "../../");
		string FEMLibDir = PluginPath + "/ThirdParty/FEMLib/FEMFXBeta/amd_femfx/";//Path.Combine(PluginPath, "/ThirdParty/FEMLib/FEMFXBeta/amd_femfx/");
		
		PublicSystemIncludePaths.AddRange(
			new string[] {
				FEMLibDir + "inc/",
				FEMLibDir + "inc/Vectormath/",
				PluginPath+"/Source/FEM/Classes"
			}
		);
		
		string FEMLibPath = FEMLibDir + "lib/";
		PublicAdditionalLibraries.Add(Path.Combine(FEMLibPath, "AMD_FEMFX.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(FEMLibPath, "sample_task_system.lib"));

		PublicIncludePaths.AddRange(
			new string[] {
				PluginPath+"/Source/FEM/Classes"
			});

		PrivateIncludePaths.AddRange(
			new string[] {
				PluginPath+"/Source/FEM/Private",
			});

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"FEMEditor",
				// ... add private dependencies that you statically link with here ...
			}
			);
		}


		PrivateIncludePaths.Add(Path.Combine(FEMLibDir, "inc/"));
		PrivateIncludePaths.Add(Path.Combine(FEMLibDir, "inc/Vectormath"));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"ProceduralMeshComponent",
				"RHI",
				"RenderCore"
			});
	}
}

