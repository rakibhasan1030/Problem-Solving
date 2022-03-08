#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dis = INT_MAX;
        int ans = -1;
        for(int i = 0; i < points.size(); i++){
            for (int j = 0; j < points[i].size() - 1; j++){
                if(x == points[i][j] || y == points[i][j+1]){
                    int d = 0;
                    d = (abs(x - points[i][j]) + abs(y - points[i][j+1]));
                    if(d < dis){
                        dis = d;
                        ans = i;
                    }
                }
            }
            cout << "ans = " << ans << endl;
        }
        return ans;
    }
};