#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
    string str ="";
    for(int i = 0; i < address.size(); i++) {
        if(address[i]=='.') {
            str.push_back('[');
            str.push_back('.');
            str.push_back(']');
        } else {
            str.push_back(address[i]);
        }
    }
    return str;
  }
};