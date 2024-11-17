#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    cout << "Hello!" << endl;

    vector<Car> carList;

    Car objectCar0("Skoda","Octavia", 2020 );
    Car objectCar1("VW","Jetta", 2011);
    Car objectCar2("Audi","A5", 2010);

    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    cout<< "Toisen alkion tiedot: "<<endl;
    carList[1].printData();
    cout<<"           "<<endl;
    cout<< "Kaikkien alkioden tiedot: "<<endl;

    for(int x=0; x<=2; x++){
        carList[x].printData();
    }
    return 0;
}
