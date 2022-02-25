#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        /* [ 0, 1, 2, 4, 5, 7 ] */

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
                if (temp != to_string(nums[i]))
                {
                    temp += arrow + to_string(nums[i]);
                }
                ans.push_back(temp);
                cout << "i = " << i << endl;
                temp = "";
            }
        }
        return ans;
    }
};
