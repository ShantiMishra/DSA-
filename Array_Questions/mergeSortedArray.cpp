#include <iostream>
using namespace std;


void mergeSorted(int arr1[],int n, int arr2[],int m , int result[]){
    int i=0 , j=0, k=0;

    while(i<n && j<m){
         if(arr1[i]<arr2[j]){
            result[k++]=arr1[i++];
         }
         else{
            result[k++]=arr2[j++];
         }
    }


    // Copying The remaining elements of arr1
    while(i<n){
        result[k++]=arr1[i++];
    }

    // Copying the remaining elements of arr2
    while(j<m){
        result[k++]=arr2[j++];
    }
}


int printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[4]={1,3,5,7};
    int arr2[7]={2,4,6,8,9,10,12};

    int n=4;
    int m=7;
    int result[n+m];

    mergeSorted(arr1,n,arr2,m,result);
    printArray(result,n+m);

}