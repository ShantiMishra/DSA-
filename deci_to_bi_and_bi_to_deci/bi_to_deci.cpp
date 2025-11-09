<<<<<<< HEAD
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valu of n :";
    cin>>n;
    int i=0, ans=0;

    while(n!=0){
      int digit = n%10;
      if(digit==1){
           ans= ans + pow(2,i);
      }
      n = n/10;
      i++;

    }
    cout<< ans << endl;
=======
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valu of n :";
    cin>>n;
    int i=0, ans=0;

    while(n!=0){
      int digit = n%10;
      if(digit==1){
           ans= ans + pow(2,i);
      }
      n = n/10;
      i++;

    }
    cout<< ans << endl;
>>>>>>> 8da0815a360d05d4b4653cfa45ff895e89448c0a
}