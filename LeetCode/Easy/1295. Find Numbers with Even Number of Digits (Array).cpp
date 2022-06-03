#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for (auto i : nums) {
            if(to_string(i).size() % 2 == 0) c += 1;  
        }
        return c;
    }
};