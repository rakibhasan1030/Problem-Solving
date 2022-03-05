#include <bits/stdc++.h>
#include "1450. Number of Students Doing Homework at a Given Time (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> startTime = {1,2,3};
    vector<int> endTime = {3,2,7};
    int queryTime = 4;
    s.busyStudent(startTime, endTime, queryTime);
    return 0;
}