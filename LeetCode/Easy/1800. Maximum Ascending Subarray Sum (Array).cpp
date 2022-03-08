#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int tmp = nums[0], mx = nums[0];
        for(int i = 1; i < nums.size(); i++){
            tmp = nums[i] > nums[i-1] ? tmp += nums[i] : nums[i];
            mx = max(mx, tmp);
        }
        return mx;
    }
};