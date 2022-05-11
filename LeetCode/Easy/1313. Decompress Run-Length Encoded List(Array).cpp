#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums) {
        vector<int> ans;
        int len = nums.size();
        for (int i = 0; i < len; i+=2) {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int j = 0; j < freq; j++) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};