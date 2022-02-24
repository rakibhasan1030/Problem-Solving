#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void twoSum()
    {
        int nums[] = {3, 2, 4};
        int target = 6;
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
    }
};
