#ifndef PLEX_FILEPARSE_H
#define PLEX_FILEPARSE_H

#include "utility/fakestrings.h"

typedef struct
{
	PLEX_FAKESTRING_100 line, commentString;
	PLEX_FAKESTRING_50 tokens[PLEX_LIMIT_TOKENLIMIT];
	size_t tokenLen[PLEX_LIMIT_TOKENLIMIT];
	size_t usedTokens, commentLen;
} PLEX_PARSELINE;

typedef struct
{
	PLEX_PARSELINE lines[PLEX_LIMIT_LINEPARSE];
	size_t usedLines;
	uint64_t linebreak, tokenbreak, comment, ignoreBreak;
} PLEX_PARSEDFILE;

#ifdef __cplusplus
extern"C"
{
#endif
	extern PLEX_PARSEDFILE PLEX_parseFile(const uint64_t linebreak, const uint64_t tokenbreak, const uint64_t comment, const uint64_t
	ignoreBreak, const char* const ignore, const char* const fileloc);

	extern void PLEX_exportParsefile(const PLEX_PARSEDFILE parsefile, const char* const lineEnd, const char* const fileloc);
#ifdef __cplusplus
}
#endif

#endif
