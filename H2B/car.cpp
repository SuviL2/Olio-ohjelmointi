#include "car.h"




Car::Car(string b, string m, int y)
    :brand(b), model(m), yearModel(y)
{

}

void Car::printData()
{
    cout<<"Merkki on "<<brand<<", malli "<<model<<" ja vuosimalli "<<yearModel<<endl;
}
