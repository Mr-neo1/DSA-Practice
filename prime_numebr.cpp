#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter A number :- ";
    cin>>n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0){
        cout<<"Not a prime number";

    }
    else{
        cout<<"Its a prime numeber";
    }
    
}