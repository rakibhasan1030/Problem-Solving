#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> getConcatenation(vector<int>& nums){
        vector<int> ans;
        int len = 2;
        while (len){
            for(auto n : nums){
                ans.push_back(n);
            }
            len--;
        }
        return ans;
    }
};