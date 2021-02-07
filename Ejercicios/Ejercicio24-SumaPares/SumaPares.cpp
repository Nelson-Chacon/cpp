#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
    int pares=0;
    for (int i = 0; i <= 10; i++)
    {
        if (i==2||i==4||i==6||i==8||i==10)
        {
            cout<<i<<" ";
            pares=pares+i;
            
        }
        
    }
    cout<<endl;
    cout<<"La suma de todos los pares es: "<<pares<<endl;
    
    return 0;
}
