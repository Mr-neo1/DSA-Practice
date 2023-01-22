#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout <<"Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout <<"Printing Done" << endl;
}


int main()
{
    int number[19];
    cout<<"Value at 14 index " << number[14]<<endl;

    int second [20] = {1 , 2  , 3 , 4 };
   // int n = 20;
    printArray(second,20);

}