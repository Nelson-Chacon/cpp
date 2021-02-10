#include <iostream>

using namespace std;
int suma(int a,int b){
    int resultado=0;
    resultado = a + b;
    return resultado;
}
int resta(int a,int b){
    int resultado=0;
    resultado = a - b;
    return resultado;
}

int main(int argc, char const *argv[])
{
    int numero1=0;
    int numero2=0;
    system("cls");
    cout<<"Ingrese su primer numero: ";
    cin>>numero1;
    cout<<endl;
    cout<<"Ingrese su segundo numero: ";
    cin>>numero2;
    cout<<endl;
    
    cout<<"El resultado de la suma es: "<<suma(numero1 , numero2);
    cout<<endl;
    cout<<"El resultado de la resta es: "<<resta(numero1 , numero2);
    return 0;
}
