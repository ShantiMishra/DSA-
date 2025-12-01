#include <iostream>
using namespace std;

int squareRoot(int n){
   int s=0;
    int e=n;
    int ans=-1;
    long long mid= s+(e-s)/2;
    while(s<=e){
     long long square = mid*mid;
       
    if(square==n){
        return mid;
    }
        if(square>n){
        e=mid-1;
    }
     else{
        ans=mid;
        s=mid+1;
     }
    mid = s+(e-s)/2;
    
}
return ans;

    
}


int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    cout<<"The square root of given number is : "<<squareRoot(n)<<endl;
}