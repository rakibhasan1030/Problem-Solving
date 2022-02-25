#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int len = nums.size();
        vector<string> ans;

        for(int i  = 0; i < len; i++){
            string temo = nums[i];
            while(nums[i] + 1 == nums[i+1]){
                i++;
            }
        }


    }
};