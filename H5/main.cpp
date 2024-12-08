#include <iostream>
using namespace std;
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"

int main()
{
    cout << "     " << endl;
    int a = 5;
    int b = 10;
    cout<<"A:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"B:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;
    cout<<"         "<<endl;

    int* myPointer=&a;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<< *myPointer<<endl;
    cout<<"         "<<endl;

    int* myPointer2=&b;
    cout<<"Pointterin osoittama osoite on: "<<myPointer2<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<< *myPointer2<<endl;
    cout<<"         "<<endl;

    int& refA =a;
    cout<<"refA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<refA<<endl;
    cout<<"         "<<endl;

    //Nyt sinun tulisi havaita mitä eroa on seuraavilla:
    //myPointer ja *myPointer
    //refA ja &refA

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout<<"         "<<endl;

   //      Suorita sovellus ja tutki tuloksia
   //      Edellisen vaiheen tarkoitus on havainnollistaa,
   //      että alkuperäisen B-olion data ei muutu, vaikka muokkaa
   //      A-olion dataa.

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    //Tehtävässä voidaan siis havaita,
    // että kun oliolle A annetaan kopio oliosta B,
    //niin A ei voi vaikuttaa olion B dataan.
    //Jos oliolle A annetaan referenssinä olion B osoite,
    //Jos oliolle A annetaan referenssinä olion B osoite,

    return 0;
}
