// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class boardgame : ModuleRules
{
	public boardgame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
