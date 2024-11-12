#include "functions.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello!" << endl;
    int a;
    cout<<"Anna luku A: ";
    cin>>a;

    int b;
    cout <<"Anna luku B: ";
    cin>>b;
  //  doubleNum(a);
     cout <<"Luku A on "<<int (a)<<endl;
     cout <<"Luku B on "<<int(b)<<endl;

     // void calcSum(int a, int b);
     // {
     //     int sum = a+b;
     //     cout <<"Lukujen summa on "<<sum<<endl;
     // }

     // void calcDiv(int a, int b);
     // {
     //     if (b==0) {
     //         cout << "Ei voida jakaa nollalla" <<endl;
     //     }
     //     else {
     //     double div = a/b;
     //     cout <<"Lukujen osamaara on "<<div<<endl;
     //     }
     // }

     int sum= retSum(a,b);
     float div= retDiv(a,b);

     cout << "Summa on "<<sum<<endl;
     cout << "Osamaara on "<<div<<endl;

    return 0;
}
