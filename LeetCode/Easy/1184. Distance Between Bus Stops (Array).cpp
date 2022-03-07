#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int clockwiseDistance = 0, totalDistance = 0;

        for(int i = 0; i < distance.size(); i++){
            if (start < destination && (i >= start && i < destination)){
                clockwiseDistance  += distance[i];
            }
            if (start > destination && (i >= start || i < destination)){
                clockwiseDistance  += distance[i];
            }
            totalDistance += distance[i];
        }
        return min(clockwiseDistance, totalDistance - clockwiseDistance);
    }
};