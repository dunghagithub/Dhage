#pragma once

#ifdef DHA_PLATFORM_WINDOWS
	#ifdef DHA_BUILD_DLL
		#define DHAGE_API __declspec(dllexport)
	#else
		#define DHAGE_API __declspec(dllimport)
	#endif
#else
	#error DHAGE only supports Windows!
#endif
