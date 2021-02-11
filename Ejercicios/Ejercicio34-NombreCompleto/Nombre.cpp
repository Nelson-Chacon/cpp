#include <iostream>
using namespace std;


string NombreCompleto(string nombre,string apellido){
    return nombre +" "+ apellido;
}
int main(int argc, char const *argv[])
{
    string PNombre="";
    string PApellido="";
    cout<<"Ingrese su primer nombre: ";
    cin>>PNombre;
    cout<<"Ingrese su primer Apellido: ";
    cin>>PApellido;
    cout<<endl;
    cout<<"El Nombre completo es: "<<NombreCompleto(PNombre,PApellido);

    return 0;
}
