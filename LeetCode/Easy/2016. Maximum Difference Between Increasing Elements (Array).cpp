#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0;
        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++){
            prev = min(prev, nums[i]);
            ans = max(ans, nums[i] - prev);
        }
        return ans != 0 ? ans : -1;
    }
};