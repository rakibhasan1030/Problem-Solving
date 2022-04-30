#include <bits/stdc++.h>
using namespace std;
class Solution {  
public:
    string replaceDigits(string s) {
    string ans = "";
    for(int i = 0; i < s.size(); ++i){
        int x, y;
        char ch = s[i];
        if(i % 2 == 0){
            ans.push_back(ch);
            x = int(ch);
        }else{
            y = x + (ch - '0');
            ans.push_back(char(y));
        }
    }
    return ans;
}
};