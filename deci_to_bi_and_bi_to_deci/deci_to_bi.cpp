<<<<<<< HEAD
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
         ans = ans + (bit * (int)round(pow(10, i)));
        n = n >> 1;
        i++;
    }
    cout << "Answer is : " << ans << endl;
=======
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
         ans = ans + (bit * (int)round(pow(10, i)));
        n = n >> 1;
        i++;
    }
    cout << "Answer is : " << ans << endl;
>>>>>>> 8da0815a360d05d4b4653cfa45ff895e89448c0a
}