#ifndef CHEF_H
#define CHEF_H

#include <iostream>
using namespace std;

class chef
{

    protected:
    string name;

    public:
    chef(const string &chefName);
    ~chef();
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
