// Subtract the product and sum of digits of an integer.
#include <iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        while(n!=0){
            int digit = n%10;
            prod = prod * digit;
            sum = sum + digit;

            n=n/10;
        }
        int answer = prod-sum;
        return answer;
    }
};
int main(){
    Solution S1;
    int n;
    cout<<"Enter a number :";
    cin>>n;
     int result=S1.subtractProductAndSum(n);
     cout<<"The result is : "<< result<<endl;
     return 0;
}