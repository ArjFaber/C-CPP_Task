#include "carPanel.ih"

void CarPanel::setGear(int const &nGear)
{
    d_gear = nGear;

}

void CarPanel::setVCar(double const &vCar)
{
    d_vCar = vCar;
}

void CarPanel::setSteering(double const &steering)
{
    d_steering = steering;
}

void CarPanel::setThrottleBrakes(double const &throttleBrakes)
{
    d_throttleBrakes = throttleBrakes;
}

void CarPanel::setEngineTemp(double const &engineTemp)
{
    d_engineTemp = engineTemp;
}

int const &CarPanel::nGear() const
{
    return d_gear;
}

double const &CarPanel::vCar() const
{
    return d_vCar;
}

double const &CarPanel::steering() const
{
    return d_steering;
}

double const &CarPanel::throttleBrakes() const
{
    return d_throttleBrakes;
}

double const &CarPanel::engineTemp() const
{
    return d_engineTemp;
}

CarPanel::CarPanel()
{
    cout << "CarPanel constructor called" << endl;
}
CarPanel::~CarPanel()
{
    cout << "CarPanel destructor called" << endl;
}