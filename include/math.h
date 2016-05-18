/*
 *    include/math.h
 *
 *    Copyright (C) 2016 ximo<ximoos@foxmail.com>
 */

#ifndef _MATH_H
#define _MATH_H

#define M_E            2.7182818284590452354   /* e 		*/
#define M_LOG2E        1.4426950408889634074   /* log_2 e 	*/
#define M_LOG10E       0.43429448190325182765  /* log_10 e 	*/
#define M_LN2          0.69314718055994530942  /* log_e 2 	*/
#define M_LN10         2.30258509299404568402  /* log_e 10 	*/
#define M_PI           3.14159265358979323846  /* pi 		*/
#define M_PI_2         1.57079632679489661923  /* pi/2 	*/
#define M_PI_4         0.78539816339744830962  /* pi/4 	*/
#define M_1_PI         0.31830988618379067154  /* 1/pi 	*/
#define M_2_PI         0.63661977236758134308  /* 2/pi 	*/
#define M_2_SQRTPI     1.12837916709551257390  /* 2/sqrt(pi) 	*/
#define M_SQRT2        1.41421356237309504880  /* sqrt(2) 	*/
#define M_SQRT1_2      0.70710678118654752440  /* 1/sqrt(2) 	*/

extern double fabs(double x);
extern double floor(double x);
extern double ceil(double x);
extern double sqrt(double x);
extern double sin(double x);
extern double cos(double x);
extern double tan(double x);

extern double acos(double x);
extern double asin(double x);
extern double atan(double x);
extern double atan2(double x, double y);
extern double hypot(double x, double y);
extern double cosh(double x);
extern double sinh(double x);
extern double tanh(double x);
extern double exp(double x);
extern double frexp(double x, int *i);
extern double ldexp(double x, int i);
extern double log(double x);
extern double log10(double x);
extern double modf(double x, double *l);
extern double pow(double x, double y);
extern double fmod(double x, double m);
extern double NaN(void);
extern int isNaN(double x);
extern double Inf(int i);
extern int isInf(double x, int i);
extern double erf(double x);
extern double erfc(double x);
extern double j0(double x);
extern double y0(double x);
extern double j1(double x);
extern double y1(double x);
extern double jn(int i, double x);
extern double yn(int i, double x);

#endif
