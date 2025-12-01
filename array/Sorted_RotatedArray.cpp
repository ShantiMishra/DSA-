#include <iostream>
using namespace std;

int getPivot(int arr[] , int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
}
    return s;
}

int binarySearch(int arr[], int s ,int e, int key){
    int start=s;
    int end=e;
    int mid =start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

int findPosition(int arr[],int n, int key){
    int pivot = getPivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        // BS in the second line
         return binarySearch(arr,pivot,n-1,key);
    }
    else{
        // BS in the first line
        return binarySearch(arr,0,pivot-1,key);
    }
}



int main(){
      int arr[9]={34,23,1,3,4,7,8,13,20};
      int n= sizeof(arr)/sizeof(arr[0]);
      int key = 1;
      cout<< "Element Found at index : "<<findPosition(arr,n,key);
}