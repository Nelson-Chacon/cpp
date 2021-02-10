#include<iostream>
using namespace std;



int suma(int a,int b){// a representa el 5 y b representa el 7 que se colocaron en la funcion main
    return a + b;//realiza la operacion
}
int main(int argc, char const *argv[])
{
    system("cls");
    cout<<"Los resultados de la suma son: "<<endl;
    cout<<suma(5,7);
    cout<<endl;
    cout<<suma(15,7);
    cout<<endl;
    cout<<suma(5,71);
    cout<<endl;
    cout<<suma(9,8);
    cout<<endl;
    return 0;
}
