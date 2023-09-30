#ifndef CARPANEL_H
#define CARPANEL_H

class CarPanel
{
    int d_gear;
    double d_vCar;
    double d_steering;
    double d_throttleBrakes;
    double d_engineTemp;

    public:
        CarPanel(); //constructor 
        void setGear(int const &nGear); 
        void setVCar(double const &vCar);
        void setSteering(double const &steering);
        void setThrottleBrakes(double const &throttleBrakes);
        void setEngineTemp(double const &engineTemp);

        int const &nGear() const;
        double const &vCar() const;
        double const &steering() const;
        double const &throttleBrakes() const;
        double const &engineTemp() const;
        ~CarPanel(); //destructor       
        
};

#endif