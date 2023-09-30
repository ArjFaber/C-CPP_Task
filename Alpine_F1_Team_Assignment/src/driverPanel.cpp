#include "driverPanel.ih"

void DriverPanel::setName(std::string const &name) 
{
    d_name = name;

}

void DriverPanel::setTeam(std::string const &team)
{
    d_team = team;

}

void DriverPanel::setNationality(std::string const &nationality)
{
    d_nationality = nationality;

}

void DriverPanel::setCurrentLap(int const &currentLap)
{
    d_currentLap = currentLap;
}

void DriverPanel::setCarPosition(int const &carPosition)
{
    d_carPosition = carPosition;
} 

void DriverPanel::setGridPosition(int const &gridPosition)
{
    d_gridPosition = gridPosition;
}

void DriverPanel::setCurrentLapTime(std::string const &currentLapTime)
{
    d_currentLapTime = currentLapTime;
}

void DriverPanel::setTimePenalties(int const &timePenalties)
{
    d_timePenalties = timePenalties;
}

void DriverPanel::setLapDistance(double const &lapDistance)
{
    d_lapDistance = lapDistance;
}

void DriverPanel::setTotalDistance(double const &totalDistance)
{
    d_totalDistance = totalDistance;
}

string const &DriverPanel::name() const
{
    return d_name;
}

string const &DriverPanel::team() const
{
    return d_team;
}

string const &DriverPanel::nationality() const
{
    return d_nationality;
}

int const &DriverPanel::currentLap() const
{
    return d_currentLap;
}

int const &DriverPanel::carPosition() const
{
    return d_carPosition;
}

int const &DriverPanel::gridPosition() const
{
    return d_gridPosition;
}

string const &DriverPanel::currentLapTime() const
{
    return d_currentLapTime;
}

int const &DriverPanel::timePenalties() const
{
    return d_timePenalties;
}

double const &DriverPanel::lapDistance() const
{
    return d_lapDistance;
}

double const &DriverPanel::totalDistance() const
{
    return d_totalDistance;
}

DriverPanel::DriverPanel()
{
    cout << "Driverpanel constructor called" << endl;
}
DriverPanel::~DriverPanel()
{
    cout << "DriverPanel destructor called" << endl;
}

