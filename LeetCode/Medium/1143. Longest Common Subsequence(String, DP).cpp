#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2){
        int len1 = text1.length();
        int len2 = text2.length();

        int res [len1 + 1][len2 + 1];

        for(int i = 0; i <= len1; i++){
            for(int j = 0; j <= len2; j++){
                if(i == 0 || j == 0){
                    res[i][j] = 0;
                }else if (text1[i-1] == text2[j-1]){
                    res[i][j] = res[i-1][j-1] + 1;
                }else{
                    res[i][j] = max(res[i-1][j], res[i][j-1]);
                }
            }

        }
        return res[len1][len2];
    }
};