#include <iostream>
using namespace std;

void imprimir(char caracter,int ciclos){
    for (int i = 0; i < ciclos; i++)
    {
        cout<<caracter;
    }
    
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    imprimir('@', 10);
    imprimir('#', 5);
    cout<<"HOLA MUNDO"<<endl;
    imprimir('*',1000);
    
    return 0;
}
