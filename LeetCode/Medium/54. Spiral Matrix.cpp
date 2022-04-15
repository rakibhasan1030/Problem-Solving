#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {     
    vector<int> ans;
    int i, top = 0, bottom = m.size()-1, left = 0, right = m[0].size()-1; /* this four variable are marking the boundary of our spiral movement */
    int direction = 0; /* Here, direction can be 0 (left to right), 1 (top to bottom), 2 (right to left) or 3 (bottom to top) */

    while(top <= bottom && left <= right){

        /* first condition : left to right */
        if (direction == 0){
            for(i = left; i <= right; i++){
                ans.push_back(m[top][i]);
            }
            top++; /* shift the top, one position down by inreasing its value */
        }

        /* second condition : top to bottom */
        else if(direction == 1){
            for (i = top; i <= bottom; i++){
                ans.push_back(m[i][right]);
            }
            right--; /* shift the right, one position left by decreasing its value */
        }

        /* third condition : right to left */
        else if (direction == 2){
            for (i = right; i >= left; i--){
                ans.push_back(m[bottom][i]);
            }
            bottom--; /* shift the bottom, one position up by decreasing its value */
        }

        /* forth condition : bottom to top */
        else if (direction == 3){
            for (i = bottom; i >= top; i--){
                ans.push_back(m[i][left]);
            }
            left++; /* shift the left, one position right by inreasing its value */
        }

        direction = (direction + 1) % 4;
    }
    return ans;      
    }
};