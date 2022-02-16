#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "   fly me   to   the moon  ";
    vector<string> st;
    int c;
    for(int i = 0; i <= s.size(); i++){
        if(s[i] != ' ' && s[i+1] == ' ' || s[i+1] != '\0'){
            c++;
        }
    }
    cout<< c;
    return 0;
}

