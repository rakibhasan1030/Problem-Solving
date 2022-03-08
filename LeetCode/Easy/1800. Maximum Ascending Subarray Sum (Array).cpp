#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int temp = nums[0], mx = nums[0];
        for(int i = 1; i < nums.size(); i++){
            temp = nums[i] > nums[i-1] ? temp += nums[i] : nums[i];
            mx = max(mx, temp);
        }
        return mx;
    }
};