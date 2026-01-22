 // Move all the zeros to the end of the array


#include <iostream>
using namespace std ;

void moveZeros(int arr[], int n){
      int j=0;
      for (int i=0 ; i<n ;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
      }
     
}



int main(){
    int arr[9]={10,20,0,30,40,0,0,50,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}