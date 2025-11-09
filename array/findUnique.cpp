#include <iostream>
using namespace std;

void unique (int arr[], int size){
       int ans=0;
       for ( int i=0; i<size; i++){
          ans=ans^arr[i];
       }
    cout<<"Unique element is : "<<ans;
}

int main(){
    int arr[7]={2,4,5,2,6,4,6};
    unique(arr,7);
  
}