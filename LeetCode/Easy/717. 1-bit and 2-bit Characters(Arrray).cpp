#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits) {
        int len = bits.size();
        bool ans = false;
        for (int i = 0; i < len; i++) {
            if (i == len - 1)
                ans = true;
            if (bits[i] == 1)
                i += 1;
        }
        return ans;
    }
};