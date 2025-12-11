 // Reverse an after a given number say m.

#include <iostream>
using namespace std;


int reverse(int arr[], int n ,int m){
     int s=m+1;
     int e=n-1;

     while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
     }
}

int printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m;
    cout<<"Enter After which index you want to reverse the array : ";
    cin>>m;
    reverse(arr,n,m);
    printArray(arr,n);
}