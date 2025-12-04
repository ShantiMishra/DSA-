#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    for(int i=1; i<n;i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8] = {3,5,67,18,32,8,90,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printArray(arr,n);
}