
// Swap Alternate elements of array.

#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
void swapAlternate(int arr[], int size){
    for(int i=0; i<size;i+=2){
        if(i+1<size){
            // swap(arr[i],arr[i+1]); Swaping using the function swap.
            int temp = arr[i+1]; // Swap using temporary variable.
            arr[i+1]=arr[i];
            arr[i]=temp;

        }
    }
}

int main(){
    int arr[6]={2,4,5,7,9,8};
    int arr2[7]={23,34,5,6,7,9,20};
     
     swapAlternate(arr,6);
     printArray(arr,6);
     swapAlternate(arr2,7);
     printArray(arr2,7);

}