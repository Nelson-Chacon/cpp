#include <iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    int nota=0;
    cout<<"Ingrese su nota: ";
    cin>>nota;
    if(nota>100 || nota<0){
        cout<<"Ingrese una nota entre 0 y 100";
        return 0;
    }

    if(nota >=96 && nota<= 100){
        cout<<"Obtuviste una A++ \"SOBRESALIENTE\"";
    }
    if (nota >=91 && nota<= 95){
        cout<<"Obtuviste una A+ \"EXCELENTE\" ";
    }
    if (nota >=86 &&nota <= 90){
        cout<<"Obtuviste una A \"MUY BUENO\"";
    }
    if (nota >=81 && nota<= 85){
        cout<<"Obtuviste una A- \"BASTANTE BIEN\"";
    }
    if (nota >=76 && nota<= 80){
        cout<<"Obtuviste una B+ \"BUENO\"" ;
    }
    if (nota >=71 && nota<= 75){
        cout<<"Obtuviste una B \"REGULAR\"" ;
    }
    if (nota >=66 && nota<= 70){
        cout<<"Obtuviste una B- \"DEBES MEJORAR UN POCO\"" ;
    }
    if (nota >=61 && nota<= 65){
        cout<<"Obtuviste una C+ \"REPROBADO DEBES MAS\"" ;
    }
    if (nota >=56 && nota<= 60){
        cout<<"Obtuviste una C \"REPROBADO DEBES MEJORAR MUCHO\"" ;
    }
    if (nota >=51 && nota<= 55){
        cout<<"Obtuviste una C- \"REBROPADO DEBES MEJORAR BASTANTE\"" ;
    }
    if (nota >=46 && nota<= 50){
        cout<<"Obtuviste una D+ \"REPRODABADO CON CARENCIAS\"" ;
    }
    if (nota >=41 && nota<= 45){
        cout<<"Obtuviste una D \"REPROBADO CON CARENCIAS SINGNIFICATIVAS\"" ;
    }
    if (nota >=36 && nota<= 40){
        cout<<"Obtuviste una D- \"MALO\"" ;
    }
    if (nota >=31 && nota<= 35){
        cout<<"Obtuviste una E+ \"MUY MALO\"" ;
    }
    if (nota >=26 && nota<= 30){
        cout<<"Obtuviste una E \"EXTREMADAMENTE MALO\"" ;
    }
    if (nota >=21 && nota<= 25){
        cout<<"Obtuviste una E- \"REPROBADOOO\"" ;
    }
    if (nota >=16 && nota<= 20){
        cout<<"Obtuviste una F+ \"POBRE EN CONOCIMIENTO\"" ;
    }
    if (nota >=11 && nota<= 15){
        cout<<"Obtuviste una F \"MUY POBRE EN CONOCIMIENTO\"" ;
    }
    if (nota >=6 && nota<= 10){
        cout<<"Obtuviste una F- \"BASTANTE POBRE EN CONOCIMIENTO\"" ;
    }
    if (nota<=5){
        cout<<"Obtuviste una F- \"BASTANTE POBRE EN CONOCIMIENTO Y DEBES REPETIR AÑO\"" ;
    }

    return 0;
}
