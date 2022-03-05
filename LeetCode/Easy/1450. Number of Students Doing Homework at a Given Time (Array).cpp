#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int res;
        for (int i = 0; i < startTime.size(); i++){
            if (startTime[i] <= queryTime && endTime[i] >= 4){
                res++;
            }
        }
        return res;
    }
};