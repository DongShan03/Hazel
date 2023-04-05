#pragma once


#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define Hazel_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Hazel only support Windows!
#endif
