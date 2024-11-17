#include "car.h"





 void Car:: setBrand(const string &newBrand)
{
     brand=newBrand;
}


// string Car::getBrand()const
// {
//     return brand;
// }



void Car::setModel(const string &newModel)
{
    model=newModel;
}

// string Car::getModel()const
// {
//     return model;
// }



void Car::setYearModel(int newYearModel)
{
    yearModel= newYearModel;
}

// int Car::getYearModel()const
// {
//     return yearModel;
// }



void Car::printData()
{
    cout<<"                      "<<endl;
    cout << "Auton merkki on: "<<brand<<endl;
    cout<< "Auton malli on: "<<model<<endl;
    cout<< "Auton valmistusvuosi on: "<<yearModel<<endl;
    cout<<"                      "<<endl;

}
