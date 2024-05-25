// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pattern_State : ModuleRules
{
	public Pattern_State(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
