#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int len = nums.size();
        vector<string> ans;
        string arrow = "->";

        for(int i  = 0; i < len; i++){
            string temp = to_string(nums[i]);
            while(nums[i] + 1 == nums[i+1]){
                i++;
            }
            temp += arrow + to_string(nums[i]);
            ans.push_back(temp);
            temp = "";
        }


    }
};