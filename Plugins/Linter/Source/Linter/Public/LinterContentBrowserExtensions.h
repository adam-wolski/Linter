// Copyright 2019-2020 Gamemakin LLC. All Rights Reserved.

#pragma once


// Integrate Linter actions into the Content Browser
class FLinterContentBrowserExtensions
{
public:
	static void InstallHooks(class FLinterModule* LinterModule, class FDelegateHandle* pContentBrowserExtenderDelegateHandle, class FDelegateHandle* pAssetExtenderDelegateHandle);
	static void RemoveHooks(class FLinterModule* LinterModule, class FDelegateHandle* pContentBrowserExtenderDelegateHandle, class FDelegateHandle* pAssetExtenderDelegateHandle);
};