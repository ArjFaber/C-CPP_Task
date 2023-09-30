#ifndef GLOBAL_H
#define GLOBAL_H
#include <stdio.h>
#include <string>

extern size_t hzMin;
extern size_t hzMax;
extern int* currentLapSeries;
extern int* carPositionSeries;
extern int* gridPositionSeries;
extern int* timePenaltiesSeries;
extern int* nGearSeries;

extern std::string* currentLapTimeSeries;

extern double* lapDistanceSeries;
extern double* vCarSeries;
extern double* steeringSeries;
extern double* throttleBrakesSeries;
extern double* engineTempSeries;

#endif