#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapaltter(int arr[] , int size)
{
    for (int i = 0 ; i < size ; i+=2){
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even [10] = {5,6,4,7,8,9,23,53,2,1};
    int odd [5] = {};

    swapaltter(even,10);
    printarray(even ,10);
}