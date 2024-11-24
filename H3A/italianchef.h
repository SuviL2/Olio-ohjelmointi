#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public chef
{
public:
    ItalianChef(const string &chefName);
    ~ItalianChef();
    void makePasta();
    string getName();


};

#endif // ITALIANCHEF_H
