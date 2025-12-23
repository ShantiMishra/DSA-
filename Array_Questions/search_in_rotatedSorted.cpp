//Search in Sorted and rotated Array...[leetcode-33]

#include <iostream>
using namespace std ;

int search(int arr[] , int n , int target){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]==target){
            return mid;
        }

        if(arr[mid]>=arr[s]){          // left part is sorted..
              if(target>=arr[s] && target<arr[mid]){
                     e=mid-1;
              }
              else{
                s=mid+1;
              }
        }
        else{                // Right part is sorted..
            if(target<=arr[e] && target>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}


int main(){
    int arr[8] = {5,6,7,8,1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 1;
    cout<<"The is found at the index : "<<search(arr,size,target);
}