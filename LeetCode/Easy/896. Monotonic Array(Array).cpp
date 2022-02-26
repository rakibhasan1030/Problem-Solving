#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int len = nums.size();
        int increasing = 1, decreasing = 1;
        for(int i = 0; i < len - 1; i++){
            if (nums[i] <= nums[i+1]){
                increasing++;
            } 
            if (nums[i] >= nums[i+1]){
                decreasing++;
            }
        }
        if(increasing == len || decreasing == len){
            return true;
        }
        return false;
    }
};