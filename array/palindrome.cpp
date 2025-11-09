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
    bool isPalindrome = 0;
    for(int i=0; i<n/2; i++){
        if(arr[i]==arr[n-i-1]){
          isPalindrome = 1;
        }
    }
    if( isPalindrome ){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}