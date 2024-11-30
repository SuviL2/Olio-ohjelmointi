#include "engine.h"

Engine::Engine() {}

Engine::Engine(int,double){
    //horsepower=hp;
    //displacement=dp;
}

int Engine::getHorsepower(){
    return horsepower;
}

void Engine::setHorsepower(const int &newHorsepower){
    if(horsepower<=0){
        horsepower=0;
    }
    horsepower=newHorsepower;
}

double Engine::getDisplacement(){
    return displacement;
}

void Engine::setDisplacement(const double &newDisplacement){
    if(displacement<=0){
        displacement=0;
    }
    displacement=newDisplacement;
}

Engine::~Engine(){}
