#pragma once

#ifdef HK_PLATFORM_WINDOWS
#if HK_DYNAMIC_LINK
	#ifdef HK_BUILD_DLL
		#define HAKU_API __declspec(dllexport)
	#else
		#define HAKU_API __declspec(dllimport)
	#endif
#else
	#define HAKU_API
#endif
#else
	#error Haku only supports Windows!
#endif

#ifdef HK_ENABLE_ASSERTS
	#define HK_ASSERT(x, ...) { if(!(x)) { HK_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }
	#define HK_CORE_ASSERT(x, ...) { if(!(x)) { HK_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
#else
	#define HK_ASSERT(x, ...)
	#define HK_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1<<x)