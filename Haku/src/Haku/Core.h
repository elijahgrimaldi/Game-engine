#pragma once

#ifdef HK_PLATFORM_WINDOWS
	#ifdef HK_BUILD_DLL
		#define HAKU_API __declspec(dllexport)
	#else
		#define HAKU_API __declspec(dllimport)
	#endif
#else
	#error Haku only supports Windows!
#endif

#define BIT(x) (1<<x)