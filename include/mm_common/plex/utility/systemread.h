#ifndef PLEX_SYSTEMREAD_H
#define PLEX_SYSTEMREAD_H

#include "string/string.h"

#include "mem/stack.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startSystemRead();
	extern bool PLEX_updateSystemRead();
	extern bool PLEX_endSystemRead();

	extern PLEX_FAKESTRING_50 PLEX_readOSName();
	extern PLEX_FAKESTRING_50 PLEX_readOSVersion();
	extern PLEX_FAKESTRING_50 PLEX_readSystemName();
	extern PLEX_FAKESTRING_50 PLEX_readAssemblyVersion();
	extern PLEX_FAKESTRING_50 PLEX_readCPUInfo(const size_t index);
	extern PLEX_FAKESTRING_50 PLEX_readCPUMHZ(const size_t index);

	extern size_t PLEX_readSystemRamUsage();
	extern size_t PLEX_cpuCount();
	extern double PLEX_cpuAvg();

	extern double PLEX_cpuUsagePerc();
#ifdef __cplusplus
}
#endif

#endif
