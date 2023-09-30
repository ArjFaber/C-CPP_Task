#ifndef DATASET_H
#define DATASET_H

#include <string>
#include <random>
#include <vector>

class DataSet
{
    public:
        DataSet(); //constructor
        int* getCurrentLapSeries(size_t hz);
        int* getCarPositionSeries(size_t hz);
        int* getGridPositionSeries(size_t hz);
        int* getTimepenaltiesSeries(size_t hz);
        int* sort(int* arr, size_t hz);
        int* enlarge(int* old, size_t oldsize, size_t newsize);
        int* getNGear(size_t hz);

        std::string* enlarge(std::string* old, size_t oldsize, size_t newsize);
        std::string* getCurrentLapTimeSeries(size_t hz);
        
        double* sort(double* arr, size_t hz);
        double* enlarge(double* old, size_t oldsize, size_t newsize);
        double* getLapDistanceSeries(size_t hz);
        double* getVCar(size_t hz);
        double* getSteering(size_t hz);
        double* getThrottleBrakes(size_t hz);
        double* getEngineTemp(size_t hz);

        int excludeNan(int val);
        double excludeNan(double val);
        ~DataSet(); //destructor

};

#endif
