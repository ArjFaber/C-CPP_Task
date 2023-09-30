#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "driverPanel.h" 
#include "carPanel.h"
#include "dataSet.h"
#include "global.h"
using namespace std;

void printDataDP(DriverPanel const &dp, int &timestamp)
{
    cout << "Name:                      " << dp.name() << endl;
    cout << "Team:                      " << dp.team() << endl;
    cout << "Nationality:               " << dp.nationality() << endl;
    cout << "Current Lap:               " << dp.currentLap() << endl;
    cout << "Car position:              " << dp.carPosition() << endl;
    cout << "Grid position:             " << dp.gridPosition() << endl;
    cout << "Current lap time:          " << dp.currentLapTime() << endl;
    cout << "Lap distance (m):          " << dp.lapDistance() << endl;
    cout << "Total distance (km):       " << dp.totalDistance() << endl;
    cout << "Time penalties(sec.):      " << dp.timePenalties() << endl;
    cout << "Time stamp:                " << timestamp << endl;
}

void printDataCP(CarPanel const &cp, int &timestamp)
{
    cout << "Velocity car (kph):                " << cp.vCar() << endl;
    cout << "Current gear:                      " << cp.nGear() << endl;
    cout << "Steering:                          " << cp.steering() << endl;
    cout << "Throttle & brakes (%):             " << cp.throttleBrakes() << endl;
    cout << "Engine temperature (°C):           " << cp.engineTemp() << endl;
    cout << "Time stamp:                        " << timestamp << endl;
 
}

int main(int argc, char* argv[])
{
    DataSet ds; //collecting data from a data set class
    currentLapSeries = ds.enlarge(ds.getCurrentLapSeries(hzMin), hzMin, hzMax);
    currentLapSeries = ds.sort(currentLapSeries,hzMax); //sort since increasing 
    carPositionSeries = ds.enlarge(ds.getCarPositionSeries(hzMin), hzMin, hzMax); //append
    gridPositionSeries = ds.enlarge(ds.getGridPositionSeries(hzMin), hzMin, hzMax);
    currentLapTimeSeries = ds.enlarge(ds.getCurrentLapTimeSeries(hzMin),hzMin, hzMax);
    timePenaltiesSeries = ds.enlarge(ds.getTimepenaltiesSeries(hzMin), hzMin, hzMax);
    timePenaltiesSeries = ds.sort(timePenaltiesSeries,hzMax); //sort since increasing 
    lapDistanceSeries = ds.enlarge(ds.getLapDistanceSeries(hzMin),hzMin, hzMax);
    lapDistanceSeries = ds.sort(lapDistanceSeries,hzMax); //sort since increasing 
    nGearSeries = ds.getNGear(hzMax);
    vCarSeries = ds.getVCar(hzMax);
    steeringSeries = ds.getSteering(hzMax);
    throttleBrakesSeries = ds.getThrottleBrakes(hzMax);
    engineTempSeries = ds.getEngineTemp(hzMax);

    int timestamp = rand() % hzMax; //choose randomly a single datum
    int displaySetting = 0;
    
    DriverPanel dp;
    dp.setName("Pierre Gasly");
    dp.setTeam("Alpine");
    dp.setNationality("French");
    dp.setCurrentLap(currentLapSeries[timestamp]);
    dp.setCarPosition(carPositionSeries[timestamp]);
    dp.setGridPosition(gridPositionSeries[timestamp]);
    dp.setCurrentLapTime(currentLapTimeSeries[timestamp]);
    dp.setLapDistance(lapDistanceSeries[timestamp]);
    dp.setTotalDistance(306.124);
    dp.setTimePenalties(timePenaltiesSeries[timestamp]);
    
    CarPanel cp;
    cp.setGear(nGearSeries[timestamp]);
    cp.setVCar(vCarSeries[timestamp]);
    cp.setSteering(steeringSeries[timestamp]);
    cp.setThrottleBrakes(throttleBrakesSeries[timestamp]);
    cp.setEngineTemp(engineTempSeries[timestamp]);
    
    cout << "Select display: " << endl;
    cout << "(1) Driver Panel " << endl;
    cout << "(2) Car Panel " << endl;
    cout << "And some more panels" << endl;
    cin >> displaySetting ;
    if (displaySetting == 1)
        printDataDP(dp, timestamp);
    
    else if (displaySetting == 2)
    {
        printDataCP(cp, timestamp);
    }else
        cout << "Invalid input" << endl;
}