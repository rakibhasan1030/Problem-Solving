#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // candies = 4, 2, 1, 1, 2   |    extraCandies = 1
        vector<bool> ans;
        for (auto x : candies){
            int c = x + extraCandies;
            bool greatest = true;
            for (auto y : candies){
                if(c < y){
                    greatest = false;
                    break;
                }
            }
            ans.push_back(greatest);
        }
        return ans;
    }
};