#include "chapters/mms0.h"

static const size_t p_chapterMax = 1;

static int64_t p_nextChapter = 0; // < keep signed
static int64_t p_chapterOn = -1;

static void p_updateChapter()
{
	if(p_nextChapter >= p_chapterMax) return;

	if(p_nextChapter > p_chapterOn)
	{
		switch(p_nextChapter)
		{
			case 0: MMS0_startChapter(); break;
		};

		p_chapterOn = p_nextChapter;
	}

	switch(p_chapterOn)
	{
		case 0:
			if(!MMS0_updateChapter())
			{
				MMS0_endChapter();
				++p_nextChapter;
			}
		break;
	};
}

int main(const int argc, char** args)
{
	if(!MMS_startGame())
	{
		// error
		return 1;
	}

	while(MMS_updateGame())
	{
		p_updateChapter();

		if(PLEX_isTerminated() || p_nextChapter >= p_chapterMax) break;
	}

	MMS_endGame();

	return 0;
}

#if (PLEX_CORE_OS == PLEX_CORE_WINDOWS)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
	return main(0, NULL);
}
#endif
