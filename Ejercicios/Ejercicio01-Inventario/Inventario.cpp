#include <iostream>
#include <string>
using namespace std;


string productos [5][4] = {//lista de productos
        {"001", "Iphone x", "0","10"},
        {"002", "Laptod DELL","5", "40"},
        {"003", "Monitor Samsung","2", "10"},
        {"004", "Mause","100", "20"},
        {"005", "headset","25", "50"}
    };
void listar_productos(){//opcion 1
    system ("cls");
       cout<<"\t\"Listado de Producto\""<<endl;
       cout<<"\t*********************"<<endl;
       cout<<"Codigo|| Descripcion||Existencia||Producto para mantenimiento"<<endl; 
       for (int i = 0; i < 5; i++)
       {
           cout<< productos [i] [0] <<"||"<<productos [i] [1]<<"||" << productos [i] [2]<<"||"<< productos [i] [3]<<endl;
       }
       system ("pause");
}
void movimiento_inventario(string codigo, int cantidad, string tipo_movimiento){//Conversion de texto a enteros
    for (int i = 0; i < 5; i++)
    {
        if (productos [i][0]==codigo)
        {
            if (tipo_movimiento == "+")
            {
                productos[i][2]=to_string(stoi(productos[i][2])+ cantidad);
            }
            else
            {
                productos[i][2]=to_string(stoi(productos[i][2])- cantidad);
            }
            
            
        }
        
    }
    
}

void producto_mantenimiento(string codigo, int cantidad, string tipo_movimiento){//Nueva funcion para realizar los movimiento
    for (int i = 0; i < 5; i++)
    {
        if (productos [i][0]==codigo)
        {
            if (tipo_movimiento == "+")
            {
              productos[i][3]=to_string(stoi(productos[i][3])+ cantidad);
            }
            else
            {
                productos[i][3]=to_string(stoi(productos[i][3])- cantidad);
            }
            
            
        }
        
    }
    
}
void ingreso_inventario(){//suma de inventarios
    string codigo = "";
    int cantidad=0;
    system ("cls");
    cout<<"\t\"Ingreso de Inventario\""<<endl;
    cout<<"\t*********************"<<endl;
    cout<<"Ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto: ";
    cin>>cantidad;
    cout<<endl;
   movimiento_inventario(codigo,cantidad,"+");
    system ("pause");
}
void salida_inventario(){//Resta al inventario
     string codigo = "";
    int cantidad=0;
    system ("cls");
    cout<<"\t\"Salida de Inventario\""<<endl;
    cout<<"\t*********************"<<endl;
    cout<<"Ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto: ";
    cin>>cantidad;
    cout<<endl;
   movimiento_inventario(codigo,cantidad,"-");
    system ("pause");

}
void mantenimiento(){//Funcionalidad positiva ya que tendra la libertad de adicionar producto que entra a la empresa a mantenimiento
    string codigo = "";
    int cantidad=0;
    system ("cls");
    cout<<"\t\"Producto en Mantenimiento \""<<endl;
    cout<<"\t*********************"<<endl;
    cout<<"Ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto: ";
    cin>>cantidad;
    cout<<endl;
    cout<<"Has adicionado un producto para darle mantenimiento"<<endl;
    producto_mantenimiento(codigo,cantidad,"+");
    system ("pause");

}
void Salida_mantenimiento(){//Funcionalidad negativa registra los productos que salen de mantenimiento
    string codigo = "";
    int cantidad=0;
    system ("cls");
    cout<<"\t\"Producto en Mantenimiento \""<<endl;
    cout<<"\t*********************"<<endl;
    cout<<"Ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto: ";
    cin>>cantidad;
    cout<<endl;
    cout<<"Has regresado un producto que se encontraba en mantenimiento"<<endl;
    producto_mantenimiento(codigo,cantidad,"-");
    system ("pause");

}
int main(int argc, char const *argv[])//funcion principal
{
    int opcion=0;
    while (true)
    {
    system ("cls");
    cout<<"\t\"Sistema de Inventario\"";
    cout<<endl;
    cout<<"\t***********************";
    cout<<endl;
    cout<<endl;
    cout<< "1- Productos"<<endl;
    cout<< "2- Ingreso de inventario"<<endl;
    cout<< "3- Salida de inventario"<<endl;
    cout<< "4- Producto para mantenimiento"<<endl;
    cout<< "5- Producto que sale de mantenimiento"<<endl;
    cout<< "0- Salir"<<endl;
    cout<<"Seleccione una opcion del menu: ";
    cin>>opcion;
    switch (opcion)
   {
   case 1:
       listar_productos();
       break;
       
    case 2:
    ingreso_inventario();
       break;
    case 3:
       salida_inventario();
       break;
    case 4:
       mantenimiento();
       break;
    case 5:
       Salida_mantenimiento();
       break;
   default:
       break;
   }
   cout<<endl;
   if(opcion==0){
       
    cout<<"Saliste del sistema de inventario"<<endl;
    system("pause");
    break;
   }
    }
   return 0;
    }
    
   