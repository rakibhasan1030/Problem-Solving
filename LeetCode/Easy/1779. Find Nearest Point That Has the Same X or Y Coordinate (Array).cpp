#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<vector<int>> validCoordinates;
        for(int i = 0; i < points.size(); i++){

            for (int j = 0; j < points[i].size() - 1; j++){

                if(x == points[i][j] || y == points[i][j+1]){
                    cout <<"[ " << points[i][j] << "  " << points[i][j+1] << " ]";
                }
                
            }
            cout << endl;
        }
    }
};