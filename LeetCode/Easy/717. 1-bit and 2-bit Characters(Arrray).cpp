#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        bool ans = false;
        for (int i = 0; i < bits.size(); i++)
        {
            if (bits.size() - 1)
                ans = true;
            if (bits[i] == 1)
                i++;
        }
        return ans;
    }
};