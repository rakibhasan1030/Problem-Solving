#include <bits/stdc++.h>
#include "1848. Minimum Distance to the Target Element (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5, start = 3;
    cout << s.getMinDistance(nums, target, start) << endl;
    return 0;
}