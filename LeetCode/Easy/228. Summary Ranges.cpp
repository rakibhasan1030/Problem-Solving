#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        /* [ 0, 2, 3, 4, 6, 8, 9 ] */

        int len = nums.size();
        vector<string> ans;
        string arrow = "->";

        if (len < 1)
        {
            return ans;
        }
        else if (len == 1)
        {
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                string temp = to_string(nums[i]);
                while (nums[i] + 1 == nums[i + 1])
                {
                    i++;
                }
                
                temp += arrow + to_string(nums[i]);
                ans.push_back(temp);
                // cout << temp << endl;
                temp = "";
            }
        }
        return ans;
    }
};