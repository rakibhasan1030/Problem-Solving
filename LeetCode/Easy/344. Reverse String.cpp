#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        char temp;
        for (int i = 0; i < size/2; i++) {
            temp = s[i];
            s[i] = s[size-i-1];
            s[size-i-1] = temp;
        }
    }
};