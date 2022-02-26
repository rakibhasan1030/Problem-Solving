#include <bits/stdc++.h>
#include "485. Max Consecutive Ones(Array).cpp"
using namespace std;
int main()
{
    Solution s;
    int a;
    vector<int> nums = {0, 0};
    a = s.findMaxConsecutiveOnes(nums);
    cout << "Ans = " << a << endl;
    return 0;
}