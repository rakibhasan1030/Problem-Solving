#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        //nums = [ 1, 1, 0, 1, 1, 1 ]
        int len = nums.size();
        int res;
        if(len <= 1){
            return len; 
        }else{
            for (int i = 0; i < len; i++){
                res = 0;
                while (i+1 <= len && nums[i] == nums[i+1])
                {
                    /* code */
                    res ++;
                    i++;
                }
            }
        }
        return res;
    }
};