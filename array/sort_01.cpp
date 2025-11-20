#include <iostream>
using namespace std;


void sortOneZero(int arr[], int n){
    int left=0 , right=n-1;
    while(left<right){
        if (arr[left]==0){
            left++;
        }
       else if ((arr[right]==1))
       {
         right--;
       } 
       else{
        swap(arr[left],arr[right]);
        left++;
        right--;
       }
       
    }
}

 void printArray(int arr[],int n){
       for (int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
       }
 }


int main(){
    int arr[8]={1,0,1,1,0,1,0,0};
    int n=8;
    sortOneZero(arr,n);
    printArray(arr,n);

   
    
}