
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
    int pares=0;
    int impares =0;
    for (int i = 0; i <= 10; i++)
    {
        if (i%2==0)
        {
            
            pares=pares+i;
            
        }
       cout<<i<<" "; 
       
    }
    cout<<endl;
    cout<<"La suma de todos los pares es: "<<pares<<endl;
 
    cout<<endl;
    cout<<endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i%2!=0)
        {
            
            impares=impares+i;
            
        }
       cout<<i<<" "; 
    }
    cout<<endl;
    cout<<"La suma de todos los impares es: "<<impares<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"La suma total es: "<<impares+pares<<endl;
    return 0;
}
