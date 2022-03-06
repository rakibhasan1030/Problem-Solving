#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> rect, ans;
        int res = 0;
        for(auto r : rectangles){
            int j = 0;
            rect.push_back(min(r[j], r[j+1]));
        }
        int mx = *max_element(rect.begin(), rect.end());
        for(auto r : rect){
            if (mx == r){
                res++;
            }
        }
        return res;
    }
};