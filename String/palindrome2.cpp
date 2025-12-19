// Palindrome or Not (Non-Case sensitive).

#include <iostream>
#include <string.h>
using namespace std;

char convertLower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}


bool checkPalindrome(char a[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(convertLower(a[s])==convertLower(a[e])){
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