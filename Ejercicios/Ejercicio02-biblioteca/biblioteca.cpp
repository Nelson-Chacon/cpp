#include <iostream>
#include<algorithm>
#include <time.h>
using namespace std;

string libros[21][3];

void cargarlibros()
{
    // Arreglo con categoria, descripcion y autores
	libros [ 0 ] [ 0 ] = " Algoritmos " ; libros [ 0 ] [ 1 ] = " Algoritmos y Programacion (Guia para docentes) ";libros [0][2] = "Juan Salvador pinero";
	libros [ 1 ] [ 0 ] = " Algoritmos " ; libros [ 1 ] [ 1 ] = " Apuntes de Algoritmos y Estructuras de Datos" ;libros [1][2] = "Mario Pon";
	libros [ 2 ] [ 0 ] = " Algoritmos " ; libros [ 2 ] [ 1 ] = " Breves Notas sobre Analisis de Algoritmos " ;libros [2][2] = "Igor Mejia";
	libros [ 3 ] [ 0 ] = " Algoritmos " ; libros [ 3 ] [ 1 ] = " Fundamentos de Informatica y Programacion " ;libros [3][2] = "Hector Garcia";
	libros [ 4 ] [ 0 ] = " Algoritmos " ; libros [ 4 ] [ 1 ] = " Temas selectos de estructuras de datos " ;libros [4][2] = "Carmen Salgado";
	libros [ 5 ] [ 0 ] = " Algoritmos " ; libros [ 5 ] [ 1 ] = " Teoria sintactico-gramatical de objetos " ;libros [5][2] = "Ernesto Pineda";
	libros [ 6 ] [ 0 ] = " Base de Datos " ; libros [ 6 ] [ 1 ] = " Apuntes de Base de Datos 1 " ;libros [6][2] = "Bily Fernandez";
	libros [ 7 ] [ 0 ] = " Base de Datos " ; libros [ 7 ] [ 1 ] = " Base de Datos (2005) " ;libros [7][2] = "Obed Ortiz";
	libros [ 8 ] [ 0 ] = " Base de Datos " ; libros [ 8 ] [ 1 ] = " Base de Datos (2011) " ;libros [8][2] = "Erika Sanchez";
	libros [ 9 ] [ 0 ] = " Base de Datos " ; libros [ 9 ] [ 1 ] = " Base de Datos Avanzadas (2013) " ;libros [9][2] = "Jajaira Escalante";
    libros [ 10 ] [ 0 ] = " Base de Datos " ; libros [ 10 ] [ 1 ] = " Diseño Conceptual de Bases de Datos " ;libros [10][2] = "Daniel Mejia";
	libros [ 11 ] [ 0 ] = " Ciencia Computacional " ; libros [ 11 ] [ 1 ] = " Breves Notas sobre Automatas y Lenguajes " ;libros [11][2] = "Jajaira Escalante";
	libros [ 12 ] [ 0 ] = " Ciencia Computacional " ; libros [ 12 ] [ 1 ] = " Breves Notas sobre Teoria de la Computación " ;libros [12][2] = "Juan Orlando Hernandez";
	libros [ 13 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 13 ] [ 1 ] = " Compendio de Ingenieria del Software " ;libros [13][2] = "Salvador Nasralla";
	libros [ 14 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 14 ] [ 1 ] = " Diseno agil con TDD " ;libros [14][2] = "Amado Guevara";
	libros [ 15 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 15 ] [ 1 ] = " Ingenieria de Software: Una Guía para Crear Sistemas de Información " ;libros [15][2] = "Xiomara Castro";
	libros [ 16 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 16 ] [ 1 ] = " Scrum & Extreme Programming (para programadores) " ;libros [16][2] = "Eduardo Maldonado";
	libros [ 17 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 17 ] [ 1 ] = " Scrum y XP desde las trincheras " ;libros [17][2] = "Ricardo Alvarez";
	libros [ 18 ] [ 0 ] = " Miscelaneos " ; libros [ 18 ] [ 1 ] = " 97 cosas que todo programador deberia saber " ;libros [18][2] = "Nasri Asfura";
	libros [ 19 ] [ 0 ] = " Miscelaneos " ; libros [ 19 ] [ 1 ] = " Docker " ;libros [19][2] = "Marco Bogran";
	libros [ 20 ] [ 0 ] = " Miscelaneos " ; libros [ 20 ] [ 1 ] = " El camino a un mejor programador " ;libros [20][2] = "Carlos Pavon";
	
}

int main(int argc, char const *argv[])
{

    string buscar="";
    cargarlibros();
    srand ( time ( NULL ));
    bool salir = false;
    while (salir==false)
    {
        string buscar="";
        system("cls");
        cout<<"\n\tSITEMA BIBLIOTECARIO"<<endl;//nombre del sistema
        cout<<"Ingrese la descripcion del libro (o el nombre del autor): ";//habilitacion de opcion para buscar el libro por su autor
        cin>>buscar;
        cout<<endl;
 for (int i = 0; i < 21; i++)
    {
        
        string libro =libros[i][1];
        string librominuscula =libro;
        string autor =libros[i][2];//creacion de una nueva variable para habilitar la opcion de los autores
        string autorlibro =autor;//variable de uso temporal para convertir a mayuscula o minuscula
        //Transformamos a miniscula
        transform(autorlibro.begin(),autorlibro.end(),autorlibro.begin(),::tolower);//conversion de mayuscula
        transform(librominuscula.begin(),librominuscula.end(),librominuscula.begin(),::tolower);
        transform(buscar.begin(),buscar.end(),buscar.begin(),::tolower);
        
        

        if (librominuscula.find(buscar)!=string::npos ||autorlibro.find(buscar)!=string::npos)//buscador para los libros
        {
            cout<<"Libro encontrado fue: "<<libro<<endl;//libro que el buscador encontro
            cout<<endl;

            cout << "\t Tambien te sugerimos estos libros: " << endl;//sugerencias de libros

                int sugerencia1 = rand ()% 20 + 1 ;
                int sugerencia2 = rand ()% 20 + 1 ;
                int sugerencia3 = rand ()% 20 + 1 ;

                cout << " Sugerencia 1: " << libros [sugerencia1] [ 1 ] << endl;
                cout << " Sugerencia 2: " << libros [sugerencia2] [ 1 ] << endl;
                cout << " Sugerencia 3: " << libros [sugerencia3] [ 1 ] << endl;
                system("pause");
            salir=true;
            break;
        }
        
    }
        if(salir==false){
            char continuar;
            while(true){
                system("cls");
                cout<<"No se encontro el libro que bucabas; desea continuar(s/n): ";//opcion para seguir buscando en caso de no encontrar el libro solicitado
                cin>>continuar;
                if(continuar=='s'||continuar=='S'){
                    break;
                }
                else if(continuar=='N'||continuar=='n')
                {
                    salir=true;
                    break;
                }
                
            }
        }
    }
    
    
    
    return 0;
}

