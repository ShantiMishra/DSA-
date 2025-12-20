// Find the character which has maximum ocurrence .

#include <iostream>
using namespace std;

char maxOccurence(string s){
    int freq[26] = {0};
    int n = s.length();
    for(int i=0;i<n;i++){
        char ch = s[i];
        int index = ch - 'a';
        freq[index]++;
    }

    int maxfreq=-1;
    int ans = 0;
    for (int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq = freq[i];
            ans = i;
        }
    }
    return ans+'a';
}

int main(){
    string s = "abaaccaa";
    cout<<maxOccurence(s);
}