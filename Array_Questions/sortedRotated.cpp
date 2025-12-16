#include <iostream>
using namespace std ;



bool rotatedSorted(int arr[] , int n){
    int breakCount = 0;
    for(int i=0; i<n ; i++){
        if(arr[i]>arr[i+1]){
            breakCount++;
        }
    }
     
    // check last element with first (rotation case)
    if(arr[n-1]>arr[0]){
        breakCount++;
    }


    if(breakCount<=1){
        return true;
    }
    else{
        return false;
    }
}




int main(){
      int arr[8] = {5,6,8,7,1,2,3,4};
      int n= sizeof(arr)/sizeof(arr[0]);
      if(rotatedSorted(arr,n)){
        cout<<"Sorted and rotated";
      }
      else{
        cout<<"not sorted or rotated";
      }


}