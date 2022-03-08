#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        //1,2,10,5,7
        vector<int> n;
        n.push_back(n[0]);
        for(int i = 1; i < nums.size(); i++){
            cout <<  " if  nums[i] = " << nums[i] << endl;
            if (nums[i] > nums[i -1]){
                 cout <<  " if  nums[i] = " << nums[i] << endl;
                n.push_back(nums[i]);
            }else{
                cout <<  " else  nums[i] = " << nums[i] << endl;
                continue;
            }
        }

        for (auto i : n){
            cout << i << "   ";
        }
    }
};