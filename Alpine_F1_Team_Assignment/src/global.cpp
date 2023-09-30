#include "global.ih"

size_t hzMin = 10;   //choosing two different sample sizes (10 and 100)
size_t hzMax = 100;  
int* currentLapSeries = new int[hzMin];
int* carPositionSeries = new int[hzMin];
int* gridPositionSeries = new int[hzMin];
int* timePenaltiesSeries = new int[hzMin];
int* nGearSeries = new int[hzMax];

std::string* currentLapTimeSeries = new string[hzMin];

double* lapDistanceSeries = new double[hzMin];
double* vCarSeries = new double[hzMax];
double* steeringSeries = new double[hzMax];
double* throttleBrakesSeries = new double[hzMax];
double* engineTempSeries = new double[hzMax];