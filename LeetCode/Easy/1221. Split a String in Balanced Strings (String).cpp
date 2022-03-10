#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
    int s_size = s.size();
    int r_count = 0, l_count = 0, main_count = 0;
    for(int i = 0; i < s_size; i++)
    {
        if(s[i] == 'R'){
            r_count++;
        }else if(s[i] == 'L'){
            l_count++;
        }
        if(r_count == l_count){
            main_count++;
            r_count = 0;
            l_count = 0;
        }
    }
    cout<< main_count << endl;
    return main_count;
    }
};