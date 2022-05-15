#pragma once

#ifdef FHS_PLATFORM_WINDOW
	#ifdef FHS_BUILD_DLL
		#define FHS_API _declspec(dllexport)
	#else
		#define FHS_API _declspec(dllimport)
	#endif // FHS_BUILD_DLL
#else
	#error FhsEngine only support Window!
#endif // FHS_PLATFORM_WINDOW

