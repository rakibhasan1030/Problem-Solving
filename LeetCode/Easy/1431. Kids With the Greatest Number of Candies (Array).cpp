#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // candies = 2, 3, 5, 1, 3   |    extraCandies = 3
        vector<bool> ans;
        for (auto i : candies){
            int c = i + extraCandies;
            for (auto i : candies){
                if(i < extraCandies){
                    
                }
            }
        }
    }
};