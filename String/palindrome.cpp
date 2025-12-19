// Palindrome or Not (Case sensitive).

#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char a[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(a[s]==a[e]){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    char name[20];
    cout<<"Enter Your String : ";
    cin>>name;
    int n = strlen(name);
    bool data = checkPalindrome(name,n);
    if(data==1){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}