#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string generateTheString(int n) {
        
    string ans = "";
    if(n%2==0)
    {
        for(int j = 0; j<n-1; j++)
        {
            ans.push_back('a');
        }
       ans.push_back('b');
    }
    else
    {
        for(int j = 0; j<n; j++)
        {
            ans.push_back('a');
        }
    }
    return ans;
        
        
        
    }
};