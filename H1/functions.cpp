#include "functions.h"



// void doubleNum(int value)
// {
//     cout <<"tuplattuna luku on " <<2*value<<endl;
// }

int retSum(int a, int b)
{
    return a+b;
}

float retDiv(int a, int b)
{
    if (b==0){
        cout << "Ei voi jakaa nollalla." << endl;
        return 0.0f;
    }
    else {
        return static_cast<float>(a)/ b;
    }
}
