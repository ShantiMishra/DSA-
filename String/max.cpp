#include <iostream>
using namespace std ;
 int main(){
    string s= "ab647i7s6cd";
    char max='0';
    for (int i=0;i<s.length();i++){
          
        char ch = s.at(i);
        if(ch>='0'&& ch<='9'&&ch>max){
            max=ch;
        }
    }
    cout<<max;
}
