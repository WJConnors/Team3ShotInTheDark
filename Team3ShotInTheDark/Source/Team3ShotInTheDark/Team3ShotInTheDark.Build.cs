// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Team3ShotInTheDark : ModuleRules
{
	public Team3ShotInTheDark(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
