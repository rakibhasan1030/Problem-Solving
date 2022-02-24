#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = sizeof(nums) / sizeof(nums[0]);
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && (nums[i] + nums[j] == target))
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    cout << "i = " << i << "\nj ==" << j << endl;
                    break;
                }
            }
        }
        return ans;
    }
};
