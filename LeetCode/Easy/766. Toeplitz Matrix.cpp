#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();    
        for(int r = 1; r < m; r++){
            for (int c = 1; c < n; c++){
                if(matrix[r][c] != matrix[r-1][c-1]) return false; 
            }
        }
        return true;
    }
};