#include "italianchef.h"

ItalianChef::ItalianChef(const string &chefName):chef(chefName) {

    cout<<"Italian Chef  "<<name<<" konstruktori"<<endl;
}


ItalianChef::~ItalianChef(){

    cout<<"Italian Chef  "<<name<<" destruktori"<<endl;
}

void ItalianChef::makePasta(){

    cout<<"Italian Chef  "<<name<<"  makes Pasta" << endl;

}


string ItalianChef::getName(){

    return name;
}





