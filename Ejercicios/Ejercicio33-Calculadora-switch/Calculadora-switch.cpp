#include <iostream>
using namespace std;

int suma(int a,int b){
    return a + b;
}
int resta(int a,int b){
    return a - b;
}
int multiplicacion(int a,int b){
    return a * b;
}
int division(int a,int b){
    if(b==0){
        throw "No se puede dividir entre 0";
    }
    return a / b;
}
int calculadora(int a,int b, char operador){
    switch (operador)
    {
    case '+' :
        return suma(a,b);
        break;
    case '-' :
        return resta(a,b);
        break;
    case '*' :
        return multiplicacion(a,b);
        break;
    case '/' :
        return division(a,b);
        break;
    
    default:
        break;
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
       cout<<"El resultado de "<<numero1<<" "<<operador<<" "<<numero2<<" es: "<<resultado<<endl;
    }
    catch(const char* error)
    {
        cout<<error;
    }
    system ("pause");

    return 0;
}