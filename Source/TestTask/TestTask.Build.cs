// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestTask : ModuleRules
{
    public TestTask(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        PublicIncludePaths.AddRange(new string[]
        {
            "TestTask/Public",
            "TestTask/Public/AI",
            "TestTask/Public/AI/Decorators",
            "TestTask/Public/UI",
            "TestTask/Public/GameField",
            "TestTask/Public/Player"
        });
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
