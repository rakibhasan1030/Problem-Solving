#include <bits/stdc++.h>
using namespace std;class Solution {
public:
    string modifyString(string s) {        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '?'){
                if((i == 0 || s[i - 1] != 'a') && (i == s.length() - 1 || s[i + 1] != 'a')) s[i] = 'a';  
                else if((i == 0 || s[i - 1] != 'b') && (i == s.length() - 1 || s[i + 1] != 'b')) s[i] = 'b';
                else if((i == 0 || s[i - 1] != 'c') && (i == s.length() - 1 || s[i + 1] != 'c')) s[i] = 'c';
            }
        }
        return s;
    }
};