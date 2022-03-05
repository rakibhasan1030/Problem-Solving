#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool threeConsecutiveOdds(vector<int> &arr){
        int c;
        for(auto n : arr){
            if (c == 3) return true;
            c = n % 2 == 1 ? c+=1 : 0;
        }
        return c == 3;
    }
};