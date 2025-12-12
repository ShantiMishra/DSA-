// Move All the Zeros to Right

#include <iostream>
using namespace std;

void moveZeros(int arr[] , int n){

      // Shifting Non-Zeros to the left

    int i = 0;
    for (int j=0; j<n ; j++){
        if(arr[j] != 0){
            swap(arr[i] , arr[j]);
            i++;
        }
    }
}

int printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
      int arr[7] = {2,0,8,4,0,6,0};
      int n = sizeof(arr)/sizeof(arr[0]);
      moveZeros(arr,n);
      printArray(arr,n);
}