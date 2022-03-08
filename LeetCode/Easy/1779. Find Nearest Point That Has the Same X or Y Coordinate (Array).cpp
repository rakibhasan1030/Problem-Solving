#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<vector<int>> validCoordinates;
        int m = 0;
        for(int i = 0; i < points.size(); i++){

            for (int j = 0; j < points[i].size() - 1; j++){
                if(x == points[i][j] || y == points[i][j+1]){
                    cout <<"[ " << points[i][j] << "  " << points[i][j+1] << " ]" << endl;
                    m = (abs(x - points[i][j]) - abs(y - points[i][j+1]));
                    cout << "Min = " << m; 
                }
                cout << endl;
            }
        }
    }
};