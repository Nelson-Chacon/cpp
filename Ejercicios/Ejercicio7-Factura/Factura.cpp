#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal= 0;
    double total=0;
    double impuesto =0.15;

    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtotal;

    total=subtotal + (subtotal*impuesto);
    cout<<endl;
    cout<<"El total a pagar es: "<<total<<endl;
    return 0;
}
