#include <iostream>
using namespace std;

bool isPossible(int arr[] , int n , int m , int mid){
    
}


int allocateBooks(int arr[] , int n , int m){
    int s=0;
    int sum=0;

    for(int i=0; i<n ; i++){
        sum+=arr[i];
    }

    int e=sum;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
           if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
           }
        else{
            s =mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}



int main(){

}