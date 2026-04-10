#include <iostream>
using namespace std ;
int main(){
    
    string s= "hello";
    int n= s.length();
   for(int i=0;i<n;i++){
     for (int j=1 ; j<=n-i;j++){
        cout<< s.substr(0,j);
     }
   }
   return 0;
}