#include <iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[minIndex]){
                   minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
     int arr[5]={3,1,9,6,2};
     int n = sizeof(arr)/sizeof(arr[0]);
     selectionSort(arr,n);
     printArray(arr,n);

}