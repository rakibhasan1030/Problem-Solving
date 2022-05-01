#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkZeroOnes(string s) {
    int n, ones = 0, maxOnes = 0, zeros = 0, maxZeros = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            zeros = 0;
            ones++;
            maxOnes = max(maxOnes, ones);
        }else{
            ones = 0;
            zeros++;
            maxZeros = max(maxZeros, zeros);
        }
    }
    return maxOnes > maxZeros ? true : false;
  }
};