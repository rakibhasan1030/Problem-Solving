#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> prefixesDivBy5(vector<int> &nums)
    {
        // [ 0 1 1 ]
        vector<bool> ans;
        int res = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int exp = 0; 
            for (int j = i; j >= 0; j--)
            {
                //cout << nums[j] << " " << "j = " << j<<endl;
                res += nums[j] * pow(2, exp); 
                //cout << "nums[" << j << "]" <<" * " << pow(2, exp) << "   = " << res << endl;
                exp++;
            }

            cout << endl;
            cout << endl;
            //cout << res << endl;
            if(res % 2 == 0){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
            res = 0;
            exp = 0;
        }
        return ans;
    }
};