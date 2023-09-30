#ifndef DRIVERPANEL_H
#define DRIVERPANEL_H

#include <string>

class DriverPanel
{
    std::string d_name;         // name of driver
    std::string d_team;         // team 
    std::string d_nationality;  // nationality driver
    int d_currentLap;           
    int d_carPosition;
    int d_gridPosition;
    std::string d_currentLapTime;   
    int d_timePenalties; 
    double d_lapDistance;
    double d_totalDistance;

    public: // member functions
        DriverPanel();
        void setName(std::string const &name);
        void setTeam(std::string const &team);
        void setNationality(std::string const &nationality);
        void setCurrentLap(int const &currentLap);
        void setCarPosition(int const &carPosition);
        void setGridPosition(int const &gridPosition);
        void setCurrentLapTime(std::string const &currentLapTime);
        void setTimePenalties(int const &timePenalties);
        void setLapDistance(double const &lapDistance);
        void setTotalDistance(double const &totalDistance);
        

        std::string const &name() const;
        std::string const &team() const;
        std::string const &nationality() const;
        int const &currentLap() const;
        int const &carPosition() const;
        int const &gridPosition() const;
        std::string const &currentLapTime() const;
        int const &timePenalties() const;
        double const &lapDistance() const;
        double const &totalDistance() const;
        ~DriverPanel();
};

#endif