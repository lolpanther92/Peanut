#pragma once

#ifdef PEANUT_PLATFORM_WINDOWS
	#ifdef PEANUT_BUILD_DLL
		#define PEANUT_API __declspec(dllexport)
	#else
		#define	PEANUT_API __declspec(dllimport)
	#endif
#else
	#error Peanut only supports windows
#endif
