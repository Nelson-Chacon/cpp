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
    throw"El operador no existe";
}

int main(int argc, char const *argv[])
{
    int numero1=0;
    int numero2=0;
    char operador;
    int resultado=0;
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
    try
    {  resultado=calculadora(numero1,numero2,operador);
       cout<<"El resultado de "<<numero1<<" "<<operador<<" "<<numero2<<" es: ";
       cout<<resultado;
    }
    catch(const char* error)
    {
        cout<<error;
    }
    
    return 0;
}
