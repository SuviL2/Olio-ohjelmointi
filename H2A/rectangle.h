#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
private:

    double width;
    double height;


public:

    void setWidth(double newWidth);

    void setHeight(double newHeight);
    double getArea() const;
    double getCircum()const;
    void printData();



};

#endif // RECTANGLE_H
