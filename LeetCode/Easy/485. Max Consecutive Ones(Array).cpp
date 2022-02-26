#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int len = nums.size();
        if(len <= 1){
            return len; 
        }else{
            for (int i = 0; i < len; i++){
                if(i+1 < len && nums[i] == nums[i+1]){
                    
                }
            }
        }
    }
};