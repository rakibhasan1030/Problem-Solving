#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool check(vector<int> &nums){
        // 3, 4, 5, 1, 2
        int c = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > nums[(i+1)%nums.size()]){
                c++;
            }
        }
        return c > 1 ? false : true;
    }
};