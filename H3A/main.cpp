#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{

    chef objchef ("Gordon Ramsay");
    objchef.makeSalad();
    objchef.makeSoup();
     cout << "         " << endl;
     cout << "         " << endl;

     ItalianChef objItalianChef ("Anthony Bourdain");
     objItalianChef.makeSalad();
     objItalianChef.makeSoup();
     objItalianChef.makePasta();
     cout<<"Italialaisen kokin nimi on  "<<objItalianChef.getName()<<endl;


    return 0;
}
