#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
};