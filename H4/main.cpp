#include <iostream>
#include "car.h"
#include "engine.h"
#include "wheel.h"
using namespace std;

int main()
{
 Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();
    return 0;
}
