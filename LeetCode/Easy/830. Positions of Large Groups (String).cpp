#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abbxxxxzzy";
    int c, j;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i-1] && s[i] == s[i+1]  ||  s[i] == s[i-1] && s[i] == s[i+1]){
            cout << s[i];
        }else if (s[i] == s[i-1] && s[i] != s[i+1]){
            cout << "   |   ";
        }
    }
    cout<< c ;
    return 0;
}
