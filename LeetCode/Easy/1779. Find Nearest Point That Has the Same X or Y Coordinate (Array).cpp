#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<vector<int>> validCoordinates;
        int dis = -1;
        for(int i = 0; i < points.size(); i++){

            for (int j = 0; j < points[i].size() - 1; j++){
                if(x == points[i][j] || y == points[i][j+1]){
                    int d = 0;
                    cout <<"[ " << points[i][j] << "  " << points[i][j+1] << " ]" << endl;
                    d = (abs(x - points[i][j]) + abs(y - points[i][j+1]));
                    cout << "Min = " << d;
                    if(dis < d){
                        dis = d;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "Last Min = " << dis;
            }
        }
    }
};