#include <bits/stdc++.h>
#include "896. Monotonic Array(Array).cpp"
using namespace std;

int main()
{
    Solution s;
    bool a;
    vector<int> nums = {1, 2, 2, 3};
    a = s.isMonotonic(nums);
    cout << "Ans = " << a << endl;
    return 0;
}