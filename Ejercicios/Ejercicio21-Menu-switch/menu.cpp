#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int opcion=0;
    while (true)
    {
        system("cls");
        cout<<"********"<<endl;
        cout<<"**MENU**"<<endl;
        cout<<"********"<<endl;

        cout<<"1- Cafe y granitas"<<endl;
        cout<<"2- Reposteria"<<endl;
        cout<<"0- Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        if (opcion==0){
        break;
        }

        switch (opcion)
        {
        case 1:
        {
        system("cls");
        cout<<"Estas en el menu de cafe y granitas"<<endl;
        system("pause");
        break;
        } 
        case 2:
        {
        system("cls");
        cout<<"Estas en el menu de reposteria"<<endl;
        system("pause");
        break;
        } 
        default:
        {
        cout<<"Ingrese una opcion validad (0,1,2)"<<endl;
        system("pause");
            break;
        }
        }
        
    }
    cout<<"\nSALISTE DEL PROGRAMA";



    return 0;
}
