#include "wheel.h"

Wheel::Wheel() {}

Wheel::Wheel(int, string){
   // size=sz;
   // type=tp;
}

int Wheel::getSize(){
    return size;
}

void Wheel::setSize(const int &newSize){
    size=newSize;
}

string Wheel::getType(){
    return type;
}

void Wheel::setType(const string &newType){
    type=newType;
}


Wheel::~Wheel(){}
