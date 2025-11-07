// Number of one bits.
#include <iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        while(n!=0){
            // checking last bit 
            if(n&1){
                count++;
               
            }
            n=n>>1;
        }
           
       return count;
    }
};
int main(){
    Solution S1;
    int n;
    cout<<"Enter the value in the binary form : ";
    cin>>n;
    int result=S1.hammingWeight(n);
    cout<<"The number of 1 bits are : "<<result<<endl;

    return 0;
}