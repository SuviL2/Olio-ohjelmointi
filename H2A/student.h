#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
private:

    string name;
    int studentNumber;
    float average;


public:

    void setName(const string &newName);
    string getName()const;
    void setStudentNumber(int newStudentNumber);
    int getStudentNumber()const;
    void setAverage(double newAverage);
    double getAverage()const;

};

#endif // STUDENT_H
