#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"





class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(const string &newModel);
    string getBrand();
    void setBrand(const string &newBrand);
    void  printDetails();
    ~Car();
};

#endif // CAR_H
