#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
    int type = 0, color = 1, name = 2, c = 0, itemSize = 0;
    for(int i = 0; i < items.size(); i++)
    {
        if(ruleKey == "type" )
        {
            if(ruleValue == items[i][type])
            {
                c++;
            }
        }
        else if(ruleKey == "color" )
        {
            if(ruleValue == items[i][color])
            {
                c++;
            }
        }
        else if(ruleKey == "name" )
        {
            if(ruleValue == items[i][name])
            {
                c++;
            }
        }
    }
    return c; 
    }
};