#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
        private:

            string brand;
            string model;
            int yearModel;

        public:

            void setBrand(const string &newBrand);
           // string getBrand()const;
            void setModel(const string &newModel);
            //string getModel()const;
            void setYearModel(int newYearModel);
            //int getYearModel() const;
            void printData();

};
#endif // CAR_H
