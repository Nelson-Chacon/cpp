#include <iostream>
using namespace std;

int suma(int a,int b){
    return a + b;
}
int calculadora(int a,int b, char operador){
    if (operador=='+')
    {
        return suma(a,b);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int numero1=0;
    int numero2=0;
    char operador;
    system("cls");
    cout<<"Ingrese su primer numero: ";
    cin>>numero1;
    cout<<endl;
    cout<<"Ingrese su segundo numero: ";
    cin>>numero2;
    cout<<endl;
    cout<<"Ingrese su operador (+ || - || * || /): ";
    cin>>operador;
    cout<<endl;

    cout<<"El resultado de "<<numero1<<" "<<operador<<" "<<numero2<<" es: ";
    cout<<calculadora(numero1,numero2,operador);
    
    
    return 0;
}
