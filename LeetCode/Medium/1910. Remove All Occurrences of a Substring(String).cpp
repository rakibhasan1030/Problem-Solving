#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
    size_t found;
    found = s.find(part);
    while (found != string::npos){
            s.replace(found, part.size(), "");
            found = s.find(part);
    }
    return s;
}
};
 