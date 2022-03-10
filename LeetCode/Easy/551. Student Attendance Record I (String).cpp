#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
    int n, a = 0, l = 0;
    bool ans = true;
    n = s.size();

    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            a++;
        } else if (s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') {
            ans = false;
            break;
        }
    }
    if(a >= 2){
       ans = false;
    }
    return ans;
    }
};
