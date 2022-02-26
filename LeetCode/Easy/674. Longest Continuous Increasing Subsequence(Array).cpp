#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int len = nums.size();
        int n = 1, mx = 1;
        for (int i = 0; i < len - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                n++;
                cout << n << "  ";
                if (mx <= n)
                {
                    mx = n;
                }
            }
            else
            {
                if (mx <= n)
                {
                    mx = n;
                }
                n = 1;
            }
        }
        return mx;
    }
};