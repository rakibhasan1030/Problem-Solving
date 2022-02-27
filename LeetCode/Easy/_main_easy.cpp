#include <bits/stdc++.h>
#include "941. Valid Mountain Array(Array).cpp"
using namespace std;

int main()
{
    Solution s;
    bool a;
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 2, 1};
    a = s.validMountainArray(nums);
    cout << "Ans = " << a << endl;
    return 0;
}