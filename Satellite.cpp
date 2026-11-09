#include "Satellite.h"
#include <iostream>

using namespace std; 


Satellite::Satellite(string n, double a, double v,
                     double b, double t) {
    name = n;
    altitude = a;
    velocity = v;
    battery = b;
    temperature = t;
}


double Satellite::getAltitude() const {
    return altitude; 
}

double Satellite::getVelocity() const {
    return velocity;
}

double Satellite::getTemperature() const {
    return temperature;
}

double Satellite::getBattery() const {
    return battery; 
}

void Satellite::displayStatus() const {
    cout << "Satellite Name: " << name << endl; 
    cout << "Current Altitude: " << altitude << " km" << endl; 
    cout << "Current Velocity: " << velocity << " km/s" << endl; 
    cout << "Current Battery: " << battery << " Wh" << endl; 
    cout << "Current Temperature: " << temperature << " C" << endl;  
}