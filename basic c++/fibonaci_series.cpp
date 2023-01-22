#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    int a = 0;
    int b = 1;
    cout<< a <<" " << b <<" ";
    
    for(int i=1; i<=20; i++)
    {
        int nextnumer = a + b;
        
        cout<<nextnumer <<" ";
        
        a = b;
       
        b = nextnumer;
    }
}