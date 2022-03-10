#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    
    string str = "";
    int arrSize = indices.size();
    for(int i = 0; i < arrSize; i++)
    {

        for(int j = 0; j < arrSize; j++)
        {
            if(i == indices[j])
            {
                str = str + s[j];
            }
        }


    }
    return str;
    }
};