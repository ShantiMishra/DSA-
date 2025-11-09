#include <iostream>
using namespace std;

void duplicate (int arr[], int size){
       int ans=0;
       for ( int i=0; i<size; i++){
          ans=ans^arr[i];
       }
         for ( int i=1; i<size; i++){
          ans=ans^i;
           }  cout<<"Duplicate element is :  "<<ans;
}

int main(){
    int arr[6]={2,4,5,2,4,4};
    duplicate(arr,6);
  
}