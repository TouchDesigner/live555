#ifndef LIVE555_Platform_h
#define LIVE555_Platform_h

#ifdef WIN32
#ifdef LIVE555_EXPORTS
#define LIVE555_API __declspec(dllexport)
#else
#define LIVE555_API __declspec(dllimport)
#endif
#else
#define LIVE555_API
#endif

#endif
