#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    int c = 0, i = 0, j = 0;
    for(i; i < jewels.size(); i++)
    {
        for(j = 0; j < stones.size(); j++)
        {
            if(jewels[i] == stones[j])
            {
                c++;
            }
        }
    }
    return c;
    }
};