#ifndef PLEX_MATH_H
#define PLEX_MATH_H

#include "meta/cinclude.h"

typedef double PLEX_MPREC;

typedef struct
{
	PLEX_MPREC x, y;
} PLEX_POINT;

typedef struct
{
	PLEX_MPREC w, h;
} PLEX_DIMENS;

typedef struct
{
	PLEX_POINT origin, intercept;
	PLEX_MPREC slope, length, lenx, leny, rise, run;
} PLEX_LINE;

typedef struct
{
	PLEX_POINT origin;
	PLEX_DIMENS dimens;
} PLEX_RECT;

#ifdef __cplusplus
extern"C"
{
#endif
	extern PLEX_MPREC PLEX_radians(const PLEX_MPREC degrees);
	extern PLEX_MPREC PLEX_degrees(const PLEX_MPREC radians);

	extern PLEX_MPREC PLEX_circlePerc(const double perc);

	extern PLEX_POINT PLEX_convPoint(const PLEX_MPREC x, const PLEX_MPREC y);
	extern PLEX_DIMENS PLEX_convDimens(const PLEX_MPREC w, const PLEX_MPREC h);
	extern PLEX_LINE PLEX_convLine(const PLEX_POINT a, const PLEX_POINT b);
	extern PLEX_RECT PLEX_convRect(const PLEX_POINT origin, const PLEX_DIMENS dimens);

	extern int8_t PLEX_signum(const PLEX_MPREC num);
	extern int8_t PLEX_invSignum(const PLEX_MPREC num);

	extern PLEX_MPREC PLEX_squareRoot(const PLEX_MPREC num);
	extern PLEX_MPREC PLEX_square(const PLEX_MPREC num);

	extern PLEX_MPREC PLEX_difference(PLEX_MPREC a, PLEX_MPREC b);

	extern bool PLEX_insideRect(const PLEX_POINT point, const PLEX_RECT rect);

	extern uint8_t PLEX_rectCollision(const PLEX_RECT rect, const PLEX_RECT rect2, const PLEX_MPREC moveX, const PLEX_MPREC moveY);

	extern PLEX_MPREC PLEX_distance(const PLEX_POINT point, const PLEX_POINT point2, PLEX_MPREC* lenx, PLEX_MPREC* leny);
	extern PLEX_MPREC PLEX_slope(const PLEX_POINT point, const PLEX_POINT point2, PLEX_MPREC* rise, PLEX_MPREC* run);
	extern PLEX_MPREC PLEX_slopeToRads(const PLEX_MPREC rise, const PLEX_MPREC run);
	extern PLEX_MPREC PLEX_radsBetweenPoints(const PLEX_POINT point, const PLEX_POINT point2);

	extern PLEX_MPREC PLEX_xIntercept(const PLEX_POINT point, const PLEX_MPREC slope);
	extern PLEX_MPREC PLEX_yIntercept(const PLEX_POINT point, const PLEX_MPREC slope);

	extern PLEX_POINT PLEX_intercept(const PLEX_POINT point, const PLEX_MPREC slope);

	extern PLEX_POINT PLEX_endPoint(const PLEX_LINE line);
	extern PLEX_POINT PLEX_halfPoint(const PLEX_LINE line);

	extern bool PLEX_below(const PLEX_LINE line, const PLEX_POINT point);

	extern void PLEX_unrigSeed();

	extern void PLEX_rigSeed(const uint8_t fixedNumber);

	extern double PLEX_randomPercentage();

	extern double PLEX_randomNumber(const double min, const double max);

	extern PLEX_MPREC PLEX_eighthCircleRads();
	extern PLEX_MPREC PLEX_quarterCircleRads();
	extern PLEX_MPREC PLEX_halfCircleRads();
	extern PLEX_MPREC PLEX_threeQuarterCircleRads();
	extern PLEX_MPREC PLEX_circleRads();

	extern PLEX_MPREC PLEX_revDiagonalMoveAmount();
	extern PLEX_MPREC PLEX_diagonalMoveAmount();
#ifdef __cplusplus
}
#endif

#endif
