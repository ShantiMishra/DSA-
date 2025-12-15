#include <iostream> 
using namespace std;


void reverseArray(int arr[] ,int start,int end){
    
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}


void rotateArray(int arr[], int size , int n){
       n = n % size;   

    // Step 1: reverse whole array
    reverseArray(arr, 0, size - 1);

    // Step 2: reverse first n elements
    reverseArray(arr, 0, n - 1);

    // Step 3: reverse remaining elements
    reverseArray(arr, n, size - 1);
}

int printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
      int arr[6]={1,2,3,4,5,6};
      int size = sizeof(arr)/sizeof(arr[0]);
     rotateArray(arr,size,2);
      printArray(arr,size);
}