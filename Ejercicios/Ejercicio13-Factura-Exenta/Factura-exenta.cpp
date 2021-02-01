#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal= 0;
    double total=0;
    double impuesto =0.15;
    int descuento =0;
    double calculo_descuento = 0;
    double calculo_impuesto=0;
    char exenta ;

    cout<<"\t\tFACTURA CON DESCUENTO";
    cout<<"\nIngrese el subtotal de la factura: ";
    cin>>subtotal;
    cout<<"\nIngrese el descuento que decea aplicar (0, 10, 15, 20, 50): ";
    cin>>descuento;
    cout<<"\nSu factura esta exenta de impuesto (S/N): ";
    cin>>exenta;
    if(exenta == 's'||exenta =='S'){
    calculo_descuento = subtotal- ((subtotal *descuento)/100);
    cout<<"El total a pagar es: "<<calculo_descuento;
    }
    else if (exenta = 'n' || exenta == 'N' ){
    calculo_descuento = (subtotal *descuento)/100;
    calculo_impuesto= (subtotal - calculo_descuento)*impuesto;
    total = subtotal - calculo_descuento + calculo_impuesto;
    cout<<endl;
    cout<<"El total a pagar es: "<<total;
    }
    return 0;
}
