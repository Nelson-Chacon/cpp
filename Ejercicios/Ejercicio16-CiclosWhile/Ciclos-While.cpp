#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a=5;
    int b=2;

    while (a>b)
    {
        cout<<"\nIngrese un numero: ";
        cin>>a;
    }
    cout<<endl;
    cout<<"Saliste del ciclo";
    return 0;
}
