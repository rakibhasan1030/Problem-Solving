#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        //7, 1, 5, 4
        int mx = 0;
        for(int i = 1; i < nums.size()-1; i++){
            
            mx = max(mx, (nums[i] - nums[i-1]));

        }
        return mx;
    }
};