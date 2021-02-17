#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    system("color 04");
    int opcion=0;
    cout<<"\t******************"<<endl;
    cout<<"\t**MENU DE JUEGOS**"<<endl;
    cout<<"\t******************"<<endl;
    cout<<endl;
    cout<<"1-> StarShip"<<endl;
    cout<<"2-> Snake "<<endl;
    cout<<"Seleccione un juego: ";//pedimos al usuario que seleccione una opcion ingresando un numero entero
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
    case 1:
    { 
        system("color a1");
        starShip();
        break;
    }
    case 2:
    { 
        system ("color 75");
        snake();
        break;
    }
    }
    return 0;
}
