#include <iostream>

using namespace std;


int sumar(){
    return 5 + 7;
}

string nombreCompleto(){

    return "Juan Perez";
}
int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombre = nombreCompleto();
    cout<<"El resultado es: "<<resultado;
    cout<<endl;
    cout<<"El nombre es: "<<nombre;
    return 0;
}
