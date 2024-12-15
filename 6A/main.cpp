#include <iostream>
#include "myclass.h"
#include "myclass.cpp"
#include <QString>

using namespace std;

int main()
{
    MyClass myObject;
    myObject.raiseMySignal();

    return 0;
}
