#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& m, int k) {
        int r = m.size(), c = m[0].size();
        vector<vector<int>> ans(r, vector<int>(c, 0));
        for(int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                
                int newPos = ( ( (i*c)+j) + k ) % (r *c ); /*   >> (i*c)+j is for find index in 1D array
                                                                >> adding k is shifting the value to the k position, 
                                                                   so after adding k, it'll be new position in 1D array 
                                                                >> (r * c) is for outOfBoundExeption of the array */
                
                /* convert 1D array newPos to 2D matrix positions, newPos = [newRow, newCol] */
                int newRow = newPos / c;
                int newCol = newPos % c;
                ans[newRow][newCol] = m[i][j];
            }
        }
        return ans;
    }
};
/* DETAIL EXPLANATION : https://youtu.be/esu6uExE0qg */

