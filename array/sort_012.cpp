#include <iostream>
using namespace std;

void sort_012(int arr[] , int n){
    int left=0 ,  mid=0 ,right=n-1 ;
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[left],arr[mid]);
            mid++;
            left++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[right],arr[mid]);
            right--;
        }
    }
}


void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[7]={2,1,0,1,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort_012(arr,n);
    printArray(arr,n);
}