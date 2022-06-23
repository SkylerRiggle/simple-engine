#pragma once

#ifdef SMPL_PLATFORM_WINDOWS
	#ifdef SMPL_BUILD_DLL
		#define SIMPLE_API __declspec(dllexport)
	#else
		#define SIMPLE_API __declspec(dllimport)
	#endif // SMPL_BUILD_DLL
	#else
		#error Simple currently only supports Windows!
#endif // SMPL_PLATFORM_WINDOWS