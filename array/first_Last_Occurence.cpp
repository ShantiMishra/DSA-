#include <iostream>
using namespace std;

int firstOcurrence(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
           end=mid-1;

        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcurrence(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
           start=mid+1;

        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}



int main(){
     int arr[8]={1,2,4,4,4,5,6,6};
     int n = sizeof(arr)/sizeof(arr[0]);
     int key = 4;
    
     cout<<"First occcurrence of element is : "<<  firstOcurrence(arr,n,key)<<endl;
     cout<<"Last occcurrence of element is : "<<  lastOcurrence(arr,n,key);

}