#include <bits/stdc++.h>
#include "674. Longest Continuous Increasing Subsequence(Array).cpp"
using namespace std;

int main()
{
    Solution s;
    int a;
    vector<int> nums = {1, 3, 5, 4, 2, 3, 4, 5};
    a = s.findLengthOfLCIS(nums);
    cout << "Ans = " << a << endl;
    return 0;
}