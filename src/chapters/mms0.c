#include "chapters/mms0.h"

static size_t p_phase = 0;

static int64_t p_pamaleana = -1;
static int64_t p_pamaleana2 = -1;

static int64_t p_extraplocan = -1;
static int64_t p_boss = -1;

static int64_t p_actor = -1;
static int64_t p_director = -1;

static int64_t p_levine = -1;
static int64_t p_bellhop = -1;

static int64_t p_leadTerrorist = -1;
static int64_t p_sideTerrorist = -1;
static int64_t p_muteTerrorist = -1;
static int64_t p_terroristLawyer = -1;

static size_t p_officeBack = 0;
static size_t p_theaterFont = 0;
static size_t p_theaterLabel = 0;
static size_t p_bubble = 0;
static size_t p_arrow = 0;

static size_t p_stageBack = 0;

static size_t p_hotelBack = 0;

static size_t p_venariusSpriteTex = 0;

static size_t p_chapter0SpriteTex = 0;

static size_t p_pamaleanaSpriteTex = 0;
static size_t p_extraplocanSpriteTex = 0;
static size_t p_levineSpriteTex = 0;

static void p_narration(const char* message)
{
	PLEX_addSpriteTheaterSlide(255, 255, 255, message, -1, 0);
}

static void p_pamTalkWait(const char* message, const uint64_t wait)
{
	PLEX_addSpriteTheaterSlide(29, 180, 255, message, p_pamaleana, wait);
}

static void p_pamTalk(const char* message)
{
	p_pamTalkWait(message, 0);
}

static void p_extrapTalk(const char* message)
{
	PLEX_addSpriteTheaterSlide(29, 255, 180, message, p_extraplocan, 0);
}

static void p_bossTalk(const char* message)
{
	PLEX_addSpriteTheaterSlide(240, 59, 59, message, p_boss, 0);
}

static void p_maintenanceVoice(const char* message)
{
	PLEX_addSpriteTheaterSlide(180, 180, 180, message, p_extraplocan, 0);
}

static void p_actorVoice(const char* message)
{
	PLEX_addSpriteTheaterSlide(205, 108, 69, message, p_actor, 0);
}

static void p_directorVoiceWait(const char* message, const uint64_t wait)
{
	PLEX_addSpriteTheaterSlide(225, 220, 127, message, p_director, wait);
}

static void p_directorVoice(const char* message)
{
	p_directorVoiceWait(message, 0);
}

static void p_levineVoiceWait(const char* message, const uint64_t wait)
{
	PLEX_addSpriteTheaterSlide(200, 200, 0, message, p_levine, wait);
}

static void p_levineVoice(const char* message)
{
	p_levineVoiceWait(message, 0);
}

static void p_bellhopVoice(const char* message)
{
	PLEX_addSpriteTheaterSlide(205, 108, 69, message, p_bellhop, 0);
}

static void p_sideTerroristVoice(const char* message)
{
	PLEX_addSpriteTheaterSlide(120, 200, 149, message, p_sideTerrorist, 0);
}

static void p_leadTerroristVoice(const char* message)
{
	PLEX_addSpriteTheaterSlide(225, 220, 127, message, p_leadTerrorist, 0);
}

static void p_terroristLawyerVoice(const char* message)
{
	PLEX_addSpriteTheaterSlide(220, 220, 220, message, p_terroristLawyer, 0);
}

static void p_startPamaleanasCubicle()
{
	PLEX_ANIMATION_PLATE pamaleanaPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_pamaleanaSpriteTex);
	PLEX_ANIMATION_PLATE bossPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_venariusSpriteTex);
	PLEX_ANIMATION_PLATE extraplocanPlate = PLEX_createAnimationPlate(0.125, 0.125, p_extraplocanSpriteTex);
	PLEX_ANIMATION_PLATE deskPlate = PLEX_createAnimationPlate(0.125, 0.125, p_extraplocanSpriteTex);

	PLEX_SPRITE pamaleanaSprite = PLEX_createSprite(&pamaleanaPlate);
	PLEX_SPRITE bossSprite = PLEX_createSprite(&bossPlate);
	PLEX_SPRITE extraplocanSprite = PLEX_createSprite(&extraplocanPlate);
	PLEX_SPRITE deskSprite = PLEX_createSprite(&deskPlate);

	PLEX_ANIMATION* pamaleanaAnim = NULL;
	PLEX_ANIMATION* pamaleanaAnim2 = NULL;
	PLEX_ANIMATION* pamaleanaAnim3 = NULL;
	PLEX_ANIMATION* pamaleanaAnim4 = NULL;

	PLEX_ANIMATION* bossAnim = NULL;
	PLEX_ANIMATION* extraplocanAnim = NULL;

	PLEX_ANIMATION* deskAnim = NULL;

	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());

	PLEX_addAnimation(&bossSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&extraplocanSprite, 5000, PLEX_getGameTime());

	PLEX_addAnimation(&deskSprite, 1, PLEX_getGameTime());

	PLEX_startSprite(PLEX_getGameTime(), &pamaleanaSprite);
	PLEX_startSprite(PLEX_getGameTime(), &bossSprite);
	PLEX_startSprite(PLEX_getGameTime(), &extraplocanSprite);

	pamaleanaAnim = PLEX_getAnimation(0, &pamaleanaSprite);
	pamaleanaAnim2 = PLEX_getAnimation(1, &pamaleanaSprite);
	pamaleanaAnim3 = PLEX_getAnimation(2, &pamaleanaSprite);
	pamaleanaAnim4 = PLEX_getAnimation(3, &pamaleanaSprite);

	bossAnim = PLEX_getAnimation(0, &bossSprite);
	extraplocanAnim = PLEX_getAnimation(0, &extraplocanSprite);

	deskAnim = PLEX_getAnimation(0, &deskSprite);

	PLEX_addAnimationFrame(0, pamaleanaAnim);
	PLEX_addAnimationFrame(1, pamaleanaAnim2);
	PLEX_addAnimationFrame(2, pamaleanaAnim3);
	PLEX_addAnimationFrame(3, pamaleanaAnim4);

	PLEX_addAnimationFrame(0, bossAnim);

	PLEX_addAnimationFrame(0, extraplocanAnim);
	PLEX_addAnimationFrame(1, extraplocanAnim);

	PLEX_addAnimationFrame(2, deskAnim);

	PLEX_beginSpriteTheater(PLEX_LANGUAGE_SETTING_LEANASCUIBCLE, p_officeBack, 0, 0, 400, 100, 255, 255, 255, p_theaterFont, p_theaterLabel, p_bubble, p_arrow, PLEX_getGameTime());

	p_pamaleana = PLEX_createActor(pamaleanaSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 0.1, PLEX_HEIGHTUNITMAX - 6), PLEX_convDimens(2, 4)), false);

	// desk
	PLEX_createActor(deskSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 1, PLEX_HEIGHTUNITMAX - 4), PLEX_convDimens(4.5, 2)), false);

	p_extraplocan = PLEX_createActor(extraplocanSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 + 2, PLEX_HEIGHTUNITMAX - 4.5), PLEX_convDimens(1.5, 1.5)), false);

	p_boss = PLEX_createActor(bossSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 3, PLEX_HEIGHTUNITMAX - 8), PLEX_convDimens(2, 4)), true);
}

static void p_startIntro()
{
	p_startPamaleanasCubicle();

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_MAIN);

	p_narration(PLEX_LANGUAGE_INTROA_LINE1);

	p_narration(PLEX_LANGUAGE_INTROA_LINE2);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_EXTRAPLOCAN);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE3);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE4);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE5);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE6);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE7);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE8);

	PLEX_animationActorChange(p_pamaleana, 1);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE9);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE10);

	PLEX_animationActorChange(p_pamaleana, 0);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE11);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE12);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE13);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE14);

	PLEX_animationActorChange(p_pamaleana, 2);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE15);

	PLEX_spriteTheaterMusicStop();

	PLEX_animationActorChange(p_pamaleana, 3);

	PLEX_spriteTheaterSoundEffect((size_t)MM_COMMON_SOUNDEFFECT_SHOCK);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE16);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_NEWSROOM);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE17);

	PLEX_animationActorChange(p_pamaleana, 0);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE18);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE19);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE20);

	PLEX_spriteTheaterMusicStop();

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE21);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_NEWSROOM);

	p_pamTalkWait(PLEX_LANGUAGE_INTROA_LINE22, 3000);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE23);

	PLEX_unhideActorChange(p_boss);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE24);

	p_bossTalk(PLEX_LANGUAGE_INTROA_LINE25);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE26);

	p_bossTalk(PLEX_LANGUAGE_INTROA_LINE27);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE28);

	p_bossTalk(PLEX_LANGUAGE_INTROA_LINE29);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE30);

	p_bossTalk(PLEX_LANGUAGE_INTROA_LINE31);

	PLEX_hideActorChange(p_boss);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE32);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE33);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE34);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE35);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE36);

	p_maintenanceVoice(PLEX_LANGUAGE_INTROA_LINE37);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE38);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE39);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE40);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE41);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE42);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE43);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE44);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE45);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE46);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE47);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE48);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE49);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE50);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE51);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE52);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE53);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE54);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE55);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE56);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE57);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE58);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE59);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE60);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE61);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE62);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE63);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE64);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE65);

	p_extrapTalk(PLEX_LANGUAGE_INTROA_LINE66);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE67);

	p_pamTalk(PLEX_LANGUAGE_INTROA_LINE68);

	PLEX_spriteTheaterMusicStop();
}

static void p_startIntroB()
{
	PLEX_ANIMATION_PLATE actorPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);
	PLEX_ANIMATION_PLATE pamaleanaPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_pamaleanaSpriteTex);
	PLEX_ANIMATION_PLATE directorPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);

	PLEX_SPRITE actorSprite = PLEX_createSprite(&actorPlate);
	PLEX_SPRITE pamaleanaSprite = PLEX_createSprite(&pamaleanaPlate);
	PLEX_SPRITE directorSprite = PLEX_createSprite(&directorPlate);

	PLEX_ANIMATION* actorSkullAnim = NULL;
	PLEX_ANIMATION* actorScriptAnim = NULL;
	PLEX_ANIMATION* actorShameAnim = NULL;
	PLEX_ANIMATION* actorPrideAnim = NULL;
	PLEX_ANIMATION* actorStandingAnim = NULL;
	PLEX_ANIMATION* actorShockedAnim = NULL;

	PLEX_ANIMATION* pamaleanaRightAnim = NULL;
	PLEX_ANIMATION* pamaleanaOfferScript = NULL;

	PLEX_ANIMATION* directorLeftAnim = NULL;
	PLEX_ANIMATION* directorScriptAnim = NULL;

	// ACTOR SPRITE

	PLEX_addAnimation(&actorSprite, 2000, PLEX_getGameTime());
	PLEX_addAnimation(&actorSprite, 200, PLEX_getGameTime());
	PLEX_addAnimation(&actorSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&actorSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&actorSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&actorSprite, 1, PLEX_getGameTime());

	actorSkullAnim = PLEX_getAnimation(0, &actorSprite);
	actorScriptAnim = PLEX_getAnimation(1, &actorSprite);
	actorShameAnim = PLEX_getAnimation(2, &actorSprite);
	actorPrideAnim = PLEX_getAnimation(3, &actorSprite);
	actorStandingAnim = PLEX_getAnimation(4, &actorSprite);
	actorShockedAnim = PLEX_getAnimation(5, &actorSprite);

	PLEX_addAnimationFrame(0, actorSkullAnim);
	PLEX_addAnimationFrame(1, actorSkullAnim);

	PLEX_addAnimationFrame(2, actorScriptAnim);
	PLEX_addAnimationFrame(3, actorScriptAnim);
	PLEX_addAnimationFrame(4, actorScriptAnim);
	PLEX_addAnimationFrame(5, actorScriptAnim);

	PLEX_addAnimationFrame(6, actorShameAnim);

	PLEX_addAnimationFrame(7, actorPrideAnim);

	PLEX_addAnimationFrame(8, actorStandingAnim);

	PLEX_addAnimationFrame(9, actorShockedAnim);

	// PAMALEANA SPRITE

	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());

	pamaleanaRightAnim = PLEX_getAnimation(0, &pamaleanaSprite);

	PLEX_addAnimationFrame(9, pamaleanaRightAnim);

	pamaleanaOfferScript = PLEX_getAnimation(1, &pamaleanaSprite);

	PLEX_addAnimationFrame(32, pamaleanaOfferScript);

	// DIRECTOR SPRITE

	PLEX_addAnimation(&directorSprite, 1000, PLEX_getGameTime());
	PLEX_addAnimation(&directorSprite, 500, PLEX_getGameTime());

	directorLeftAnim = PLEX_getAnimation(0, &directorSprite);
	directorScriptAnim = PLEX_getAnimation(1, &directorSprite);

	PLEX_addAnimationFrame(10, directorLeftAnim);
	PLEX_addAnimationFrame(11, directorLeftAnim);
	PLEX_addAnimationFrame(12, directorLeftAnim);
	PLEX_addAnimationFrame(13, directorLeftAnim);
	PLEX_addAnimationFrame(10, directorLeftAnim);
	PLEX_addAnimationFrame(11, directorLeftAnim);
	PLEX_addAnimationFrame(12, directorLeftAnim);
	PLEX_addAnimationFrame(13, directorLeftAnim);
	PLEX_addAnimationFrame(14, directorLeftAnim);
	PLEX_addAnimationFrame(15, directorLeftAnim);
	PLEX_addAnimationFrame(16, directorLeftAnim);
	PLEX_addAnimationFrame(17, directorLeftAnim);

	PLEX_addAnimationFrame(18, directorScriptAnim);
	PLEX_addAnimationFrame(19, directorScriptAnim);
	PLEX_addAnimationFrame(20, directorScriptAnim);
	PLEX_addAnimationFrame(21, directorScriptAnim);

	// START SPRITES

	PLEX_startSprite(PLEX_getGameTime(), &actorSprite);
	PLEX_startSprite(PLEX_getGameTime(), &pamaleanaSprite);
	PLEX_startSprite(PLEX_getGameTime(), &directorSprite);

	PLEX_beginSpriteTheater(PLEX_LANGUAGE_SETTING_COMMUNITYTHEATER, p_stageBack, 0, 0, 400, 100, 255, 255, 255, p_theaterFont, p_theaterLabel, p_bubble, p_arrow, PLEX_getGameTime());

	p_pamaleana = PLEX_createActor(pamaleanaSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 4, PLEX_HEIGHTUNITMAX - 6), PLEX_convDimens(2, 4)), true);

	p_actor = PLEX_createActor(actorSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 0.1, PLEX_HEIGHTUNITMAX - 10), PLEX_convDimens(2, 4)), false);

	p_director = PLEX_createActor(directorSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 + 4, PLEX_HEIGHTUNITMAX - 6), PLEX_convDimens(2, 4)), true);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_DAYTODAY);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE1);

	PLEX_animationActorChange(p_actor, 1);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE2);

	PLEX_unhideActorChange(p_pamaleana);
	PLEX_animationActorChange(p_actor, 2);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE3);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE4);

	PLEX_animationActorChange(p_actor, 3);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE5);

	PLEX_unhideActorChange(p_director);

	PLEX_animationActorChange(p_actor, 4);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE6);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE7);

	PLEX_animationActorChange(p_actor, 5);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE8);

	PLEX_animationActorChange(p_actor, 4);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE9);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE10);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE11);

	p_actorVoice(PLEX_LANGUAGE_INTROB_LINE12);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE13);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE14);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE15);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE16);

	p_directorVoiceWait(PLEX_LANGUAGE_INTROB_LINE17, 1000);

	PLEX_animationActorChange(p_pamaleana, 1);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE18);

	PLEX_animationActorChange(p_pamaleana, 0);

	PLEX_animationActorChange(p_director, 1);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE19);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE20);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE21);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE22);

	PLEX_animationActorChange(p_director, 0);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE23);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE24);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE25);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE26);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE27);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE28);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE29);

	p_pamTalk(PLEX_LANGUAGE_INTROB_LINE30);

	p_directorVoice(PLEX_LANGUAGE_INTROB_LINE31);
}

static void p_startOutroA()
{
	PLEX_ANIMATION_PLATE levinePlate = PLEX_createAnimationPlate(0.0625, 0.125, p_levineSpriteTex);
	PLEX_ANIMATION_PLATE pamaleanaPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_pamaleanaSpriteTex);
	PLEX_ANIMATION_PLATE pamaleanaPlate2 = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);
	PLEX_ANIMATION_PLATE bellhopPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);
	PLEX_ANIMATION_PLATE leadTerroristPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);
	PLEX_ANIMATION_PLATE sideTerroristPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);
	PLEX_ANIMATION_PLATE muteTerroristPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);
	PLEX_ANIMATION_PLATE terroristLawyerPlate = PLEX_createAnimationPlate(0.0625, 0.125, p_chapter0SpriteTex);

	PLEX_SPRITE levineSprite = PLEX_createSprite(&levinePlate);
	PLEX_SPRITE pamaleanaSprite = PLEX_createSprite(&pamaleanaPlate);
	PLEX_SPRITE pamaleanaSprite2 = PLEX_createSprite(&pamaleanaPlate2);
	PLEX_SPRITE bellhopSprite = PLEX_createSprite(&bellhopPlate);
	PLEX_SPRITE leadTerroristSprite = PLEX_createSprite(&leadTerroristPlate);
	PLEX_SPRITE sideTerroristSprite = PLEX_createSprite(&sideTerroristPlate);
	PLEX_SPRITE muteTerroristSprite = PLEX_createSprite(&muteTerroristPlate);
	PLEX_SPRITE terroristLawyerSprite = PLEX_createSprite(&terroristLawyerPlate);

	PLEX_ANIMATION* levinePhoneAnim = NULL;
	PLEX_ANIMATION* levineStandAnim = NULL;
	PLEX_ANIMATION* levineShoutAnim = NULL;
	PLEX_ANIMATION* levinePointAnim = NULL;
	PLEX_ANIMATION* levinePaperAnim = NULL;

	PLEX_ANIMATION* pamaleanaUpAnim = NULL;
	PLEX_ANIMATION* pamaleanaPapersAnim = NULL;
	PLEX_ANIMATION* pamaleanaDownAnim = NULL;
	PLEX_ANIMATION* pamaleanaOpenDoorAnim = NULL;
	PLEX_ANIMATION* pamaleanaPapersAnim2 = NULL;

	PLEX_ANIMATION* bellhopUpAnim = NULL;
	PLEX_ANIMATION* bellhopWindowJump = NULL;
	PLEX_ANIMATION* windowBreakAnim = NULL;

	PLEX_ANIMATION* leadTerroristAnim = NULL;

	PLEX_ANIMATION* sideTerroristAnim = NULL;

	PLEX_ANIMATION* muteTerroristAnim = NULL;

	PLEX_ANIMATION* terroristLawyerPapersAnim = NULL;
	PLEX_ANIMATION* terroristLawyerAnim = NULL;

	// LEVINE SPRITE

	PLEX_addAnimation(&levineSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&levineSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&levineSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&levineSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&levineSprite, 1, PLEX_getGameTime());

	levinePhoneAnim = PLEX_getAnimation(0, &levineSprite);

	PLEX_addAnimationFrame(0, levinePhoneAnim);

	levineStandAnim = PLEX_getAnimation(1, &levineSprite);

	PLEX_addAnimationFrame(1, levineStandAnim);

	levineShoutAnim = PLEX_getAnimation(2, &levineSprite);

	PLEX_addAnimationFrame(2, levineShoutAnim);

	levinePointAnim = PLEX_getAnimation(3, &levineSprite);

	PLEX_addAnimationFrame(3, levinePointAnim);

	levinePaperAnim = PLEX_getAnimation(4, &levineSprite);

	PLEX_addAnimationFrame(4, levinePaperAnim);

	// PAMALEANA SPRITE

	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&pamaleanaSprite, 1, PLEX_getGameTime());

	PLEX_addAnimation(&pamaleanaSprite2, 500, PLEX_getGameTime());

	pamaleanaUpAnim = PLEX_getAnimation(0, &pamaleanaSprite);

	PLEX_addAnimationFrame(4, pamaleanaUpAnim);

	pamaleanaPapersAnim = PLEX_getAnimation(1, &pamaleanaSprite);

	PLEX_addAnimationFrame(30, pamaleanaPapersAnim);

	pamaleanaDownAnim = PLEX_getAnimation(2, &pamaleanaSprite);

	PLEX_addAnimationFrame(13, pamaleanaDownAnim);

	pamaleanaPapersAnim2 = PLEX_getAnimation(3, &pamaleanaSprite);

	PLEX_addAnimationFrame(31, pamaleanaPapersAnim2);

	pamaleanaOpenDoorAnim = PLEX_getAnimation(0, &pamaleanaSprite2);

	PLEX_addAnimationFrame(37, pamaleanaOpenDoorAnim);
	PLEX_addAnimationFrame(38, pamaleanaOpenDoorAnim);
	PLEX_addAnimationFrame(39, pamaleanaOpenDoorAnim);
	PLEX_addAnimationFrame(40, pamaleanaOpenDoorAnim);

	// BELLBOY SPRITE

	PLEX_addAnimation(&bellhopSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&bellhopSprite, 1000, PLEX_getGameTime());
	PLEX_addAnimation(&bellhopSprite, 1, PLEX_getGameTime());

	bellhopUpAnim = PLEX_getAnimation(0, &bellhopSprite);

	PLEX_addAnimationFrame(30, bellhopUpAnim);

	bellhopWindowJump = PLEX_getAnimation(1, &bellhopSprite);

	PLEX_addAnimationFrame(31, bellhopWindowJump);
	PLEX_addAnimationFrame(32, bellhopWindowJump);
	PLEX_addAnimationFrame(33, bellhopWindowJump);
	PLEX_addAnimationFrame(34, bellhopWindowJump);
	PLEX_addAnimationFrame(35, bellhopWindowJump);
	PLEX_addAnimationFrame(36, bellhopWindowJump);
	PLEX_addAnimationFrame(36, bellhopWindowJump);
	PLEX_addAnimationFrame(36, bellhopWindowJump);

	windowBreakAnim = PLEX_getAnimation(2, &bellhopSprite);

	PLEX_addAnimationFrame(36, windowBreakAnim);

	// LEAD TERRORIST SPRITE

	PLEX_addAnimation(&leadTerroristSprite, 500, PLEX_getGameTime());

	leadTerroristAnim = PLEX_getAnimation(0, &leadTerroristSprite);

	PLEX_addAnimationFrame(22, leadTerroristAnim);
	PLEX_addAnimationFrame(23, leadTerroristAnim);
	PLEX_addAnimationFrame(24, leadTerroristAnim);
	PLEX_addAnimationFrame(25, leadTerroristAnim);

	// SIDE TERRORIST SPRITE

	PLEX_addAnimation(&sideTerroristSprite, 1, PLEX_getGameTime());

	sideTerroristAnim = PLEX_getAnimation(0, &sideTerroristSprite);

	PLEX_addAnimationFrame(26, sideTerroristAnim);

	// MUTE TERRORIST SPRITE

	PLEX_addAnimation(&muteTerroristSprite, 1, PLEX_getGameTime());

	muteTerroristAnim = PLEX_getAnimation(0, &muteTerroristSprite);

	PLEX_addAnimationFrame(27, muteTerroristAnim);

	// TERRORIST LAWYER SPRITE

	PLEX_addAnimation(&terroristLawyerSprite, 1, PLEX_getGameTime());
	PLEX_addAnimation(&terroristLawyerSprite, 1, PLEX_getGameTime());

	terroristLawyerPapersAnim = PLEX_getAnimation(0, &terroristLawyerSprite);

	PLEX_addAnimationFrame(28, terroristLawyerPapersAnim);

	terroristLawyerAnim = PLEX_getAnimation(1, &terroristLawyerSprite);

	PLEX_addAnimationFrame(29, terroristLawyerAnim);

	// START SPRITES

	PLEX_startSprite(PLEX_getGameTime(), &levineSprite);
	PLEX_startSprite(PLEX_getGameTime(), &pamaleanaSprite);
	PLEX_startSprite(PLEX_getGameTime(), &pamaleanaSprite2);
	PLEX_startSprite(PLEX_getGameTime(), &bellhopSprite);

	PLEX_startSprite(PLEX_getGameTime(), &leadTerroristSprite);
	PLEX_startSprite(PLEX_getGameTime(), &sideTerroristSprite);
	PLEX_startSprite(PLEX_getGameTime(), &muteTerroristSprite);

	PLEX_startSprite(PLEX_getGameTime(), &terroristLawyerSprite);

	PLEX_beginSpriteTheater(PLEX_LANGUAGE_SETTING_DISCREETMOTEL, p_hotelBack, 0, 0, 400, 100, 255, 255, 255, p_theaterFont, p_theaterLabel, p_bubble, p_arrow, PLEX_getGameTime());

	p_levine = PLEX_createActor(levineSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2, PLEX_HEIGHTUNITMAX/2 + 1), PLEX_convDimens(2, 4)), false);

	p_pamaleana = PLEX_createActor(pamaleanaSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2, PLEX_HEIGHTUNITMAX/2 + 6), PLEX_convDimens(2, 4)), true);

	p_pamaleana2 = PLEX_createActor(pamaleanaSprite2, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 0.1, PLEX_HEIGHTUNITMAX - 6), PLEX_convDimens(2, 4)), true);

	p_bellhop = PLEX_createActor(bellhopSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2, PLEX_HEIGHTUNITMAX/2 + 6), PLEX_convDimens(2, 4)), true);

	p_leadTerrorist = PLEX_createActor(leadTerroristSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2, PLEX_HEIGHTUNITMAX/2 + 6), PLEX_convDimens(2, 4)), true);

	p_sideTerrorist = PLEX_createActor(sideTerroristSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 + 2, PLEX_HEIGHTUNITMAX/2 + 8), PLEX_convDimens(2, 4)), true);

	p_muteTerrorist = PLEX_createActor(muteTerroristSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 2, PLEX_HEIGHTUNITMAX/2 + 8), PLEX_convDimens(2, 4)), true);

	p_terroristLawyer = PLEX_createActor(terroristLawyerSprite, PLEX_convRect(PLEX_convPoint(PLEX_WIDTHUNITMAX/2 - 2, PLEX_HEIGHTUNITMAX/2 + 1), PLEX_convDimens(2, 4)), true);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_DARKCITY);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE1);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE2);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE3);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE4);

	PLEX_spriteTheaterSoundEffect((size_t)MM_COMMON_SOUNDEFFECT_KNOCKING);

	p_narration(PLEX_LANGUAGE_OUTROA_LINE5);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE6);

	PLEX_animationActorChange(p_levine, 1);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE7);

	PLEX_unhideActorChange(p_pamaleana);

	p_levineVoiceWait(PLEX_LANGUAGE_OUTROA_LINE8, 500);

	PLEX_animationActorChange(p_pamaleana, 1);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE9);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE10);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE11);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE12);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE13);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE14);

	PLEX_animationActorChange(p_pamaleana, 0);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE15);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE16);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE17);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE18);

	PLEX_animationActorChange(p_pamaleana, 2);

	PLEX_spriteTheaterSoundEffect((size_t)MM_COMMON_SOUNDEFFECT_KNOCKING);

	p_narration(PLEX_LANGUAGE_OUTROA_LINE19);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE20);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE21);

	PLEX_animationActorChange(p_levine, 2);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE22);

	PLEX_animationActorChange(p_levine, 3);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE23);

	PLEX_animationActorChange(p_levine, 1);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_SUSPENSE);

	p_bellhopVoice(PLEX_LANGUAGE_OUTROA_LINE24);

	PLEX_animationActorChange(p_levine, 2);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE25);

	PLEX_animationActorChange(p_levine, 1);

	p_bellhopVoice(PLEX_LANGUAGE_OUTROA_LINE26);

	PLEX_hideActorChange(p_pamaleana);
	PLEX_unhideActorChange(p_pamaleana2);

	p_pamTalkWait(PLEX_LANGUAGE_OUTROA_LINE27, 200);

	PLEX_hideActorChange(p_pamaleana2);
	PLEX_unhideActorChange(p_pamaleana);

	PLEX_animationActorMove(p_pamaleana, PLEX_WIDTHUNITMAX/2 + 3, PLEX_HEIGHTUNITMAX/2 + 1);

	PLEX_unhideActorChange(p_bellhop);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE28);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE29);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE30);

	p_bellhopVoice(PLEX_LANGUAGE_OUTROA_LINE31);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE32);

	p_bellhopVoice(PLEX_LANGUAGE_OUTROA_LINE33);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE34);

	p_bellhopVoice(PLEX_LANGUAGE_OUTROA_LINE35);

	PLEX_spriteTheaterSoundEffect((size_t)MM_COMMON_SOUNDEFFECT_KNOCKING);

	p_narration(PLEX_LANGUAGE_OUTROA_LINE36);

	PLEX_animationActorMove(p_bellhop, PLEX_HEIGHTUNITMAX * 0.333325 - 2, PLEX_HEIGHTUNITMAX/2 - 5);

	PLEX_animationActorChange(p_bellhop, 1);

	p_bellhopVoice(PLEX_LANGUAGE_OUTROA_LINE37);

	PLEX_animationActorChange(p_bellhop, 2);

	PLEX_unhideActorChange(p_leadTerrorist);
	PLEX_unhideActorChange(p_sideTerrorist);
	PLEX_unhideActorChange(p_muteTerrorist);

	PLEX_spriteTheaterMusicStop();

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE38);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_SUSPENSE);

	p_levineVoiceWait(PLEX_LANGUAGE_OUTROA_LINE39, 2000);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE40);

	p_sideTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE41);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE42);

	p_sideTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE43);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE44);

	p_sideTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE45);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE46);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE47);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE48);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE49);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE50);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE51);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE52);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE53);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE54);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE55);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE56);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE57);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE58);

	PLEX_unhideActorChange(p_terroristLawyer);

	p_terroristLawyerVoice(PLEX_LANGUAGE_OUTROA_LINE59);

	PLEX_animationActorChange(p_terroristLawyer, 1);
	PLEX_animationActorChange(p_levine, 4);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE60);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE61);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE62);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE63);

	p_sideTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE64);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE65);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE66);

	p_terroristLawyerVoice(PLEX_LANGUAGE_OUTROA_LINE67);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE68);

	PLEX_animationActorChange(p_levine, 1);
	PLEX_animationActorChange(p_pamaleana, 3);

	p_levineVoice(PLEX_LANGUAGE_OUTROA_LINE69);

	PLEX_animationActorChange(p_pamaleana, 2);

	p_pamTalk(PLEX_LANGUAGE_OUTROA_LINE70);

	p_leadTerroristVoice(PLEX_LANGUAGE_OUTROA_LINE71);
}

static void p_startOutroB()
{
	p_startPamaleanasCubicle();

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_NEWSROOM);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE1);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE2);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE3);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE4);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE5);

	PLEX_spriteTheaterMusicStop();

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE6);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_NEWSROOM);

	p_pamTalkWait(PLEX_LANGUAGE_OUTROB_LINE7, 3000);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE8);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE9);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE10);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE11);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE12);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE13);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE14);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE15);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE16);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE17);

	p_extrapTalk(PLEX_LANGUAGE_OUTROB_LINE18);

	p_pamTalk(PLEX_LANGUAGE_OUTROB_LINE19);

	PLEX_spriteTheaterMusicChange((size_t)MM_COMMON_THEMEID_MAIN);

	p_narration(PLEX_LANGUAGE_OUTROB_LINE20);
}

void MMS0_startChapter()
{
	p_officeBack = PLEX_loadTextureFromFile(3840, 1640, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_OFFICEBACK);
	p_theaterFont = PLEX_loadTextureFromFile(512, 512, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_SELECTIONFONT);
	p_theaterLabel = PLEX_loadTextureFromFile(400, 100, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_STAGELABEL);
	p_bubble = PLEX_loadTextureFromFile(800, 200, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_BUBBLE);
	p_arrow = PLEX_loadTextureFromFile(800, 200, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_ARROW);

	p_stageBack = PLEX_loadTextureFromFile(3840, 1640, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_THEATERSTAGE);

	p_hotelBack = PLEX_loadTextureFromFile(3840, 1640, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_HOTELROOM);

	p_chapter0SpriteTex = PLEX_loadTextureFromFile(512, 512, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_CHAPTER0SPRITEPLATE);

	p_pamaleanaSpriteTex = PLEX_loadTextureFromFile(512, 512, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_PAMALEANASPRITEPLATE);

	p_extraplocanSpriteTex = PLEX_loadTextureFromFile(512, 512, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_EXTRAPLOCANSPRITEPLATE);

	p_levineSpriteTex = PLEX_loadTextureFromFile(512, 512, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_LEVINESPRITEPLATE);

	p_venariusSpriteTex = PLEX_loadTextureFromFile(512, 512, 255, 255, 255, 255, 0, MMS_FILEPATH_TEX_MRVENARIUS);
}

bool MMS0_updateChapter()
{
	switch(p_phase)
	{
		case 0:
			if(!PLEX_inSpriteTheater()) p_startIntro();
			PLEX_updateSpriteTheater(PLEX_getGameTime());
			if(PLEX_isSpriteTheaterOver()){ ++p_phase; PLEX_endSpriteTheater(); }
		break;

		case 1:
			if(PLEX_isSpriteTheaterOver()) p_startIntroB();
			PLEX_updateSpriteTheater(PLEX_getGameTime());
			if(PLEX_isSpriteTheaterOver()){ ++p_phase; PLEX_endSpriteTheater(); }
		break;

		case 2:
			MMS_runMinigame0(p_chapter0SpriteTex, p_pamaleanaSpriteTex);
			++p_phase;
		break;

		case 3:
			if(!PLEX_inSpriteTheater()) p_startOutroA();
			PLEX_updateSpriteTheater(PLEX_getGameTime());
			if(PLEX_isSpriteTheaterOver()){ ++p_phase; PLEX_endSpriteTheater(); }
		break;

		case 4:
			if(!PLEX_inSpriteTheater()) p_startOutroB();
			PLEX_updateSpriteTheater(PLEX_getGameTime());
			if(PLEX_isSpriteTheaterOver()){ ++p_phase; PLEX_endSpriteTheater(); }
		break;

		default: return false;
	}

	return true;
}

void MMS0_endChapter()
{
	PLEX_destroyTexture(p_officeBack);
	PLEX_destroyTexture(p_theaterFont);
	PLEX_destroyTexture(p_theaterLabel);
	PLEX_destroyTexture(p_bubble);
	PLEX_destroyTexture(p_arrow);

	PLEX_destroyTexture(p_stageBack);
	PLEX_destroyTexture(p_hotelBack);
	PLEX_destroyTexture(p_officeBack);

	PLEX_destroyTexture(p_chapter0SpriteTex);
	PLEX_destroyTexture(p_pamaleanaSpriteTex);
	PLEX_destroyTexture(p_extraplocanSpriteTex);
	PLEX_destroyTexture(p_levineSpriteTex);
	PLEX_destroyTexture(p_venariusSpriteTex);

	p_officeBack = -1;
	p_theaterFont = -1;
	p_theaterLabel = -1;
	p_bubble = -1;
	p_arrow = -1;

	p_stageBack = -1;
	p_hotelBack = -1;
	p_officeBack = -1;

	p_chapter0SpriteTex = -1;
	p_pamaleanaSpriteTex = -1;
	p_extraplocanSpriteTex = -1;
	p_levineSpriteTex = -1;
	p_venariusSpriteTex = -1;
}

