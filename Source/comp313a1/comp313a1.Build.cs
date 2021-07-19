// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class comp313a1fuck : ModuleRules
{
	public comp313a1fuck(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
