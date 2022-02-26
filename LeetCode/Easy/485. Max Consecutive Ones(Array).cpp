#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int m = 0, ones = 0;
        for (auto num : nums){
            num == 1 ? ones++ : ones = 0;
            m = max(m, ones);
        }
        return m;
    }
};