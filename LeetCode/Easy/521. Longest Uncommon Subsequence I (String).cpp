#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b) return -1;
        int n = a.size();
        int m = b.size();
        
        int dp[n+1][m+1];
        
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=m;j++) {
                if(i == 0 && j == 0) 
                    dp[i][j] = 0;
                else if(i==0) 
                        dp[i][j] = j;
                else if(j==0) 
                       dp[i][j] = i; 
                else if(a[i-1] != b[j-1]) 
                    dp[i][j] = 1 + dp[i-1][j-1];
                else 
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};