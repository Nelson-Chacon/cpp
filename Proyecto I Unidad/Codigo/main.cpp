#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int opcion=0;
    cout<<"\t******************"<<endl;
    cout<<"\t**MENU DE JUEGOS**"<<endl;
    cout<<"\t******************"<<endl;
    cout<<endl;
    cout<<"1-> StarShip"<<endl;
    cout<<"2-> Snake "<<endl;
    cout<<"Seleccione un juego: ";//pedimos al usuario que seleccione una opcion ingresando un numero entero
    cin>>opcion;
    switch (opcion)
    {
    case 1:
    { 
        system("cls");
        system ("color a0");
        starShip();
        break;
    }
    case 2:
    { 
        system("cls");
        system ("color 01");
        snake();
        break;
    }
    
    }
    return 0;
}
