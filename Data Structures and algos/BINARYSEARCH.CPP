#include <iostream>
using namespace std;

int binarysearch(int arr[],int size , int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

   while (start<=end){

    if(arr[mid] == key){
        return mid;
    }
    if (key > arr[mid]){
        start = mid + 1;
    }
    else{end = mid - 1;}
    mid = start + (end - start)/2;
   } 
//if value is not present in array
   return -1;
}


int main(){

    int even [8]= {2,4,6,8,10,12,14,16};
    int odd[10] ={1,3,5,7,9,11,13,15,17,19};

    int evenindex = binarysearch(even,8,16);

cout<<"Index of 16 is " << evenindex << endl;
int oddindex = binarysearch(odd, 10,15);

cout <<"index of 15 is " << oddindex << endl;
 return 0;
}


