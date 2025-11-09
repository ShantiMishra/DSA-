#include <iostream>
using namespace std;
int main(){
    int n ;
    int arr[100];
    cout<<"Enter the no of elements in array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;

    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    }
    cout<<"Sum of all elements is : "<<sum;
}