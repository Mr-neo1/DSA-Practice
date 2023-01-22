#include <iostream>
using namespace std;

int main(){
    int a ,b ;
    char op;
    cout<<"Enter NUmber A :-";
    cin>>a;

    cout<<"Enter Number B :-";
    cin>>b;

    cout<<"Enter the operation you want to perform :-";
    cin>>op;

    switch (op)
    {
    case '+': cout<<(a+b);
        break;

    case '-': cout<<(a-b);
        break;
    
    case '*': cout<<(a*b);
        break;

    case '/': cout<<(a/b);
        break;

    case '%': cout<<(a%b);
        break;
    
    default: cout<<"its not a valid operation";
        break;
    }

}
