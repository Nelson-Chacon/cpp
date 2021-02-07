#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
    int pares=0;
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
    
    return 0;
}
