#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        //1,2,10,5,7
        vector<int> n;
        n.push_back(nums[0]);
        for(int i = 0; i < nums.size()-1; i++){
           if( nums[i] < nums[i+1]){
               n.push_back(nums[i]);
           } else continue;
        }

        for (auto i : n){
            cout << i << "  ";
        }
    }
};