#include <bits/stdc++.h>
#include "1437. Check If All 1's Are at Least Length K Places Away (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> nums = {1, 0, 0, 0, 1, 0, 0, 1};
    int k = 2;
    cout << "Ans : " << s.kLengthApart(nums, k);
    return 0;
}