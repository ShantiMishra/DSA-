#include <iostream>
using namespace std ;


void rotateArray(int arr[] , int size , int k){
    int temp[size];

    for(int i=0; i<size ; i++){
        temp[(i+k)%size] = arr[i];   // Storing Rotated Array in the temp
    }

    // copying from temp to arr.
   for (int i=0; i<size; i++){
    arr[i]=temp[i];
   }
}


int printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
     int arr[7] = {1,2,3,4,5,6,7};
     int size = sizeof(arr)/sizeof(arr[0]);
     rotateArray(arr,size,4);
     printArray(arr,size);
}