// Linear search.

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
       
    }
    return 0;
}


int main(){
  int  arr[10]={5,-6,-8,3,78,63,9,-4,4,20};
  int key;
  cout<<"Enter the element you want to search : ";
  cin>>key;
  int found = search(arr,10,key);

  if (found==1){
    cout<<"Element found ";
  }
  else{
    cout<<"Element not found ";
  }

}