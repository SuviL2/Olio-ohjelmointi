#include <iostream>
#include "animal.h"
#include "dog.h"
//#include "cat.h"


using namespace std;

// void handleAnimal(Animal* animals) {
//       animals->callOut();
//
// }



int main()
{

    Animal objAnimal;
    Dog objDog;
    objAnimal.callOut();
    objDog.callOut();




    //  Animal* animals[] = { new Dog(), new Cat() };

    // for (int i = 0; i <2; i++) {
    //     animals[i]->callOut();
    // }

    // for (int j=0; j<2; j++){
    //     delete animals[j];
    //     animals[j]=nullptr;
    // }




    // Animal* dog = new Dog();
    // Animal* cat = new Cat();
    // handleAnimal(dog);
    // handleAnimal(cat);

    // delete dog;
    // delete cat;




    return 0;
}

