//#include"car.h"
//#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{

    // Car objCar;
    // objCar.setBrand("Skoda");
    // objCar.setModel("Octavia");
    // objCar.setYearModel(2020);

    // cout << "Hello!" << endl;

    // objCar.printData();



    // Rectangle *objRectangle;
    // objRectangle=new Rectangle;
    // objRectangle->setHeight(5);
    // objRectangle->setWidth(4);
    // objRectangle->printData();
    // delete objRectangle;
    // objRectangle=nullptr;



    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Kalle");
    objStudent->setStudentNumber(2572);
    objStudent->setAverage(4.5);


    cout<< "Opiskelijan nimi on: "<<objStudent->getName()<<endl;
    cout<< "Opiskelijan opiskelijanumero on: "<<objStudent->getStudentNumber()<<endl;
    cout<< "Opiskelijan keskiarvo on: "<<objStudent->getAverage()<<endl;


    return 0;
}











