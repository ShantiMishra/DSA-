#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool containDuplicate(int arr[], int n){
    sort(arr,arr+n);
    for(int i=1; i<n;i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
        else{
            return false;
        }
    }
}



int main (){
   int n;
   cout<<"Enter the value of n : ";
   cin>>n;
   int arr[n];
   cout<<"enter the elements of array : "<<" ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   bool result =containDuplicate(arr,n);
   if(result==true){
    cout<<"Contains";
   }
   else{
    cout<<"Not Contains";
   }
}