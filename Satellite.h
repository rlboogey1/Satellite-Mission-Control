#ifndef SATELLITE_H
#define SATELLITE_H

#include <string>

class Satellite {
    private: 
        std::string name; //Identifies the satellite (e.g., SAT-001)
        double altitude; //Altitude above earth kilometers 
        double velocity; // orbital speed in km/s
        double battery; //remaining battery energy in watt-hours(Wh)
        double temperature; // temperature in celsius

    public: 
        Satellite(std::string name, double altitude, double velocity, double battery, double temperature);
        double getAltitude() const; 
        double setAltitude(int alt);
        double getVelocity() const; 
        double increaseSpeed(int speed);
        double getBattery() const; 
        double getTemperature() const; 
        void displayStatus() const; 
};

#endif