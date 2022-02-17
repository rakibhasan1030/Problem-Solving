#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abbxxxxzzy";
    int c, j;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i-1] && s[i] == s[i+1]){ // for first letter
            cout << s[i];
        } else if (s[i] == s[i-1] && s[i] == s[i+1]){ // for middle letter
            cout << s[i];
        } else if (s[i] == s[i-1] && s[i] != s[i+1]){ // for last letter
            cout << s[i];
            cout << "   |   ";
        }
    }
    return 0;
}
