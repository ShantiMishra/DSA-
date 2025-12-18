
// add two numbers represented as arrays.

#include <iostream>
using namespace std;


void addArray(int a[] , int n , int b[] , int m){
    int  i = n-1;
    int  j = m-1;
    int  k = n+m-1;   //Last index of the resultant array

    int ans[n+m];
    int carry = 0;
     
    while(i>=0||j>=0){
        int val1;
        if(i>=0){
            val1=a[i];
            i--;
        }
        else{
            val1=0;
        }

        int val2;
        if(j>=0){
            val2=b[j];
            j--;
        }
        else{
            val2=0;
        }

        int sum = val1 + val2 + carry;
        carry = sum/10; // carry for next digit 
        ans[k] = sum%10 ;// store last digit
         k--;

    }

    // If carray is still left
    if(carry != 0){
        ans[k]=carry;
    }

    cout << "Result : ";
    for(int i=0;i<m+n;i++){
        cout<< ans[i] << " ";
    }

    
}

int main(){
     int a[] = {9, 8};
    int b[] = {6};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    addArray(a, n, b, m);
}