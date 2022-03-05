#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos = -1;
        bool ans = true;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 1 && pos >= 0){
                if (k <= ((i+1) - pos) - 1){
                    ans = true;
                    pos = i+1;
                }else{
                    ans = false;
                    break;
                }
            }else if (nums[i] == 1 && pos < 0){
                pos = i+1;
            }
        }
        return ans;
    }
};