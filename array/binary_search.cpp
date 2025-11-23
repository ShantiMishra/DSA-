#include <iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
    int start=0;
    int end=size-1;
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


int main(){

    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};
    int n= sizeof(even)/sizeof(even[0]);
    int m= sizeof(odd)/sizeof(odd[0]);
    int key=8;
    // int result= binarySearch(even,n,key);
    int result= binarySearch(odd,m,key);

    if (result==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at : "<<result;
    }


}