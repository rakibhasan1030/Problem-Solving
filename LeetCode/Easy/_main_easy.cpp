#include <bits/stdc++.h>
#include "1848. Minimum Distance to the Target Element (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int target = 1, start = 0;
    cout << s.getMinDistance(nums, target, start) << endl;
    return 0;
}