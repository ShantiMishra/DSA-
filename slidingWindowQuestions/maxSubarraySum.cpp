#include <iostream>
using namespace std ;


int maxSubarraySum(int arr[] , int n , int k){
    if(n<k) return 0;
    int windowSum = 0;
    int maxSum = INT16_MIN;

    // Sum of First Window ...
    for(int i=0; i<k ; i++){
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Sliding the Window ....
    for(int i=k; i<n ; i++){
        windowSum = windowSum + arr[i] - arr[i-k];
        if(windowSum>maxSum){
            maxSum = windowSum;
        }
    }

    return maxSum;
   
}



int main(){
      int arr[9] = {1,2,3,4,5,6,7,-8,-9};
      int n = sizeof(arr)/sizeof(arr[0]);
      int k ; 
      cout<<"Enter the size of window ";
      cin>>k;
      cout<<"The maximum is : "<<maxSubarraySum(arr,n,k);
}