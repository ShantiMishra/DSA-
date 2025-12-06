#include <iostream>
using namespace std;

int insertionSort(int arr[] , int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
         int j=i-1;
         while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
         }
         arr[j+1]=temp;
    }
}

int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
      int arr[7] = {10,1,7,4,8,2,11};
      int n = sizeof(arr)/sizeof(arr[0]);
      insertionSort(arr,n);
      printArray(arr,n);

}