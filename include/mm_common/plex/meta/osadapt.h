#ifndef PLEX_OSADAPT_H
#define PLEX_OSADAPT_H

// NOTE: Eventually integrate mac, android, and ios

#define PLEX_CORE_XXBIT 0
#define PLEX_CORE_16BIT 1
#define PLEX_CORE_32BIT 2
#define PLEX_CORE_64BIT 3

#define PLEX_CORE_NOOS 0
#define PLEX_CORE_LINUX 1
#define PLEX_CORE_WINDOWS 2

#define PLEX_CORE_OS PLEX_CORE_NOOS
#define PLEX_CORE_IS_UNIX false
#define PLEX_CORE_IS_APPLE false
#define PLEX_CORE_BITCOMPILE PLEX_CORE_XXBIT

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
	#undef PLEX_CORE_OS
	#define PLEX_CORE_OS PLEX_CORE_WINDOWS

	#define PLEX_NL "\r\n"

	#ifdef _WIN16
		#undef PLEX_CORE_BITCOMPILE
		#define PLEX_CORE_BITCOMPILE PLEX_CORE_16BIT
	#endif

	#ifdef _WIN32
		#ifdef _WIN64
			#undef PLEX_CORE_BITCOMPILE
			#define PLEX_CORE_BITCOMPILE PLEX_CORE_64BIT
		#else
			#undef PLEX_CORE_BITCOMPILE
			#define PLEX_CORE_BITCOMPILE PLEX_CORE_32BIT
		#endif
	#endif
#endif

#if defined(__linux__) || defined(linux) || defined(__linux)
	#undef PLEX_CORE_OS
	#define PLEX_CORE_OS PLEX_CORE_LINUX

	#define PLEX_NL "\n"

	#if defined(__x86_64__) || defined(__amd64__) || defined(__amd64)
		#undef PLEX_CORE_BITCOMPILE
		#define PLEX_CORE_BITCOMPILE PLEX_CORE_64BIT
	#elif defined(i386) || defined(__i386) || defined(__i386__)
		#undef PLEX_CORE_BITCOMPILE
		#define PLEX_CORE_BITCOMPILE PLEX_CORE_32BIT
	#endif
#endif

#if defined(__APPLE__)
	#undef PLEX_CORE_IS_APPLE
	#define PLEX_CORE_IS_APPLE true

	#define PLEX_NL "\r"
#endif

#if defined(__unix__) || defined(__unix) || defined(_POSIX_VERSION)
	#undef PLEX_CORE_IS_UNIX
	#define PLEX_CORE_IS_UNIX true

	// double check this one
	#define _GNU_SOURCE
#endif

#endif
