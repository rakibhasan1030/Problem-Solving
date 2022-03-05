#include <bits/stdc++.h>
#include "1450. Number of Students Doing Homework at a Given Time (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> startTime = {4};
    vector<int> endTime = {4};
    int queryTime = 5;
    cout << "ANS : " << s.busyStudent(startTime, endTime, queryTime);
    return 0;
}