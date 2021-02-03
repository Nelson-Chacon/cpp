#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int b =1;
    while (a>b)
    {
        cout<<"(while) A > B"<< endl;
        break;
        
    }
    
    
    do{
        cout<<"(do while) A > B"<< endl;
        break;
    }while (a>b);
    return 0;
}
