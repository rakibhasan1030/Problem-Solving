#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPower(string s) {
    int _temp = 1, _max = 1;
    if(s.size() == 1) return 1;
    for(int i = 1; i <= s.size(); i++){
        if (s[i-1] == s[i]){
            _temp++;
        }else{
            _temp = 1;
        }
        if(_temp > _max) _max = _temp;
    }
    return _max;
    }
};