//checking wether the given number is prime or not by using break statement.

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number you want to check"<<endl;
    cin>>n;
     int isPrime=1;
     for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
     }
     if(isPrime==0){
        cout<<"Number is not a prime number";
     }
     else{
        cout<<"Number is a prime number";
     }
    
}