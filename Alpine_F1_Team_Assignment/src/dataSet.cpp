#include "dataSet.ih"

int DataSet::excludeNan(int val)
{
    if( isnan(val))
        val = 0;
    return val;
}

double DataSet::excludeNan(double val)
{
    if( isnan(val))
        val = 0;
    return val;
}



int* DataSet::enlarge(int *old, size_t oldsize, size_t newsize)
{
    int *tmp = new int[newsize]; //allocating larger array dynamically
    

    for (size_t idx = 0; idx != oldsize; ++idx)
        tmp[idx] = old[idx];

    for (size_t idx = oldsize; idx != newsize; ++idx)
    {    
        int RandIndex = rand() % oldsize;
        tmp[idx] = old[RandIndex];
    }
    delete[] old; 
    return tmp;
}


string* DataSet::enlarge(string *old, size_t oldsize, size_t newsize)
{
    string *tmp = new string[newsize]; //allocating larger array dynamically
    

    for (size_t idx = 0; idx != oldsize; ++idx)
        tmp[idx] = old[idx];

    for (size_t idx = oldsize; idx != newsize; ++idx)
    {    
        int RandIndex = rand() % oldsize;
        tmp[idx] = old[RandIndex];
    }
    delete[] old; 
    return tmp;
}

double* DataSet::enlarge(double *old, size_t oldsize, size_t newsize)
{
    double *tmp = new double[newsize]; //allocating larger array dynamically
    

    for (size_t idx = 0; idx != oldsize; ++idx)
        tmp[idx] = old[idx];

    for (size_t idx = oldsize; idx != newsize; ++idx)
    {    
        int RandIndex = rand() % oldsize;
        tmp[idx] = old[RandIndex];
    }
    delete[] old; 
    return tmp;
}


int* DataSet::sort(int *arr, size_t hz)
{
    int temp = 0;
    for (size_t i = 0; i < hz; ++i)
    {
        for (size_t j = 0; j < hz; ++j)
        {
            if (arr[i] < arr[j] )  //sort 
            {
                temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

double* DataSet::sort(double *arr, size_t hz)
{
    double temp = 0.0;
    for (size_t i = 0; i < hz; ++i)
    {
        for (size_t j = 0; j < hz; ++j)
        {
            if (arr[i] < arr[j] )  //sort 
            {
                temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int* DataSet::getCurrentLapSeries(size_t hz)
{
    int *currentLapSeries = new int[hz];
    std:: default_random_engine generator;
    std::poisson_distribution<int> distribution(20);

    for (size_t idx=0; idx < hz; ++idx)
    {
        currentLapSeries[idx] = distribution(generator);
        currentLapSeries[idx] = excludeNan(currentLapSeries[idx]);

    };

    currentLapSeries = DataSet::sort(currentLapSeries,hz);
    
    return currentLapSeries;
    
}

int* DataSet::getCarPositionSeries(size_t hz)
{
    int *carPositionSeries = new int[hz];

    std:: default_random_engine generator;
    std::poisson_distribution<int> distribution(4);

    for (size_t idx=0; idx < hz; ++idx)
    {
        carPositionSeries[idx] = distribution(generator);
        carPositionSeries[idx] = excludeNan(carPositionSeries[idx]);

    }    

    return carPositionSeries;

}

int* DataSet::getGridPositionSeries(size_t hz)
{
    std:: default_random_engine generator;
    std::poisson_distribution<int> distribution(4);

    int* gridPositionSeries = new int[hz];

    int randomGridPos = distribution(generator);

    for (size_t idx = 0; idx < hz; ++ idx)
    { 
        gridPositionSeries[idx] = randomGridPos;
        gridPositionSeries[idx] = excludeNan(gridPositionSeries[idx]);
    }
    return gridPositionSeries;

}
int* DataSet::getTimepenaltiesSeries(size_t hzMin)
{
    int tp[10] = {0,0,0,0,0,0,0,0,5,10};
    int timePen = 0;
    
    int* timePenaltiesSeries = new int[hzMin];

    for (size_t idx = 0; idx < hzMin; ++idx)
    {    
        size_t valIdx = rand() % 10;
        timePen = timePen + tp[valIdx];
        timePenaltiesSeries[idx] = timePen;
        timePenaltiesSeries[idx] = excludeNan(timePenaltiesSeries[idx]);
    }
    return timePenaltiesSeries;

}

string* DataSet::getCurrentLapTimeSeries(size_t hzMin)
{
    string min = "01";
    string* time = new string[hzMin];
    
    std::default_random_engine generator;
    std:: uniform_real_distribution<double> distribution(10.0,59.99);
    
    for (size_t idx = 0; idx < hzMin; idx++)
    {    
        time[idx] = min + ':' + to_string(distribution(generator));
        //time[idx] = excludeNan(time[idx]);
    
    }
    return time;

}

double* DataSet::getLapDistanceSeries(size_t hzMin)
{
    double *lapDistanceSeries = new double[hzMin];
    std::default_random_engine generator;
    std:: uniform_real_distribution<double> distribution(0.0,5278.0);

    for (size_t idx = 0; idx < hzMin; ++idx)
    { 
        lapDistanceSeries[idx] = distribution(generator);
        //lapDistanceSeries[idx] = excludeNan(lapDistanceSeries[idx]);
        //Here some further implementation for nans
    }
    lapDistanceSeries = DataSet::sort(lapDistanceSeries,hzMin);
    return lapDistanceSeries;
}

int* DataSet::getNGear(size_t hz)
{
    int* nGearSeries = new int[hz];
    for (size_t idx=0; idx < hz; ++idx)
    {
        nGearSeries[idx] = rand() % 8;
        nGearSeries[idx] = excludeNan(nGearSeries[idx]);
    }

    return nGearSeries;
}


double* DataSet::getVCar(size_t hz)
{
    double *vCarSeries = new double[hz];
    std::default_random_engine generator;
    std:: uniform_real_distribution<double> distribution(0.0,372.20);

    for (size_t idx = 0; idx < hz; ++idx)
    {
        vCarSeries[idx] = distribution(generator);
        vCarSeries[idx] = excludeNan(vCarSeries[idx]);
    }
    return vCarSeries;
}
double* DataSet::getSteering(size_t hz)
{
    double *steeringSeries = new double[hz];
    std::default_random_engine generator;
    std:: uniform_real_distribution<double> distribution(-1.0,1.0);

    for (size_t idx = 0; idx < hz; ++idx)
    {    
        steeringSeries[idx] = distribution(generator);
        steeringSeries[idx] = excludeNan(steeringSeries[idx]);
    }
    return steeringSeries;
}

double* DataSet::getThrottleBrakes(size_t hz)
{
    double *throthleBrakesSeries = new double[hz];
    std::default_random_engine generator;
    std:: uniform_real_distribution<double> distribution(0.0,1.0);

    for (size_t idx = 0; idx < hz; ++idx)
    {
        throthleBrakesSeries[idx] = distribution(generator);
        throthleBrakesSeries[idx] = excludeNan(throthleBrakesSeries[idx]);
    }
    return throthleBrakesSeries;
}

double* DataSet::getEngineTemp(size_t hz)
{
    double *engineTempSeries = new double[hz];
    std::default_random_engine generator;
    std:: uniform_real_distribution<double> distribution(10.0,120.0);

    for (size_t idx = 0; idx < hz; ++idx)
    {    
        engineTempSeries[idx] = distribution(generator);
        engineTempSeries[idx] = excludeNan(engineTempSeries[idx]);
    }
    return engineTempSeries;
}



DataSet::DataSet()
{
    cout << "Data constructor called" << endl;
};

DataSet::~DataSet()
{
    cout << "Data destructor called" << endl;
};