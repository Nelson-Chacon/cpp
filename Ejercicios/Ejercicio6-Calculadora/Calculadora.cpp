#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double a=0; //declaro variables de coma flotantes
    double b=0;
    cout<<"\nIngrese el valor A: ";//pedimos al usuario que digite un numero cualquiera
    cin>>a;
    cout<<"\nIngrese el valor de B: ";//pedimos al usuario que digite un numero cualquiera
    cin>>b;
    cout<<"\nOPERACIONES ARITMETICAS";//realizamos todas las operaciones aritmetica y mostramos el resultaod
    cout<<"\n------------------------";
    cout<<"\nLa suma de los valores es: "<<a+b;
    cout<<"\nLa resta de los valores es: "<<a-b;
    cout<<"\nLa multiplicacion de los valores es: "<<a*b;
    cout<<"\nLa division de los valores es: "<<a/b;
    cout<<"\n------------------------";
    return 0;
}
