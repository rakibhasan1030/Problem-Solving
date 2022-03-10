#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areNumbersAscending(string s) {
    string x = "";
    vector<int> numbers;
    bool w;
    for (int i = 0; i <= s.size(); i++){
        x.push_back(s[i]);
        if(isspace(s[i]) || s[i] == '\0')
        {
            bool n = x.find_first_not_of("0123456789");
            if(n == 1){
                numbers.push_back(stoi(x));
            }
            x = "";
        }
    }
    for (int j = 1; j < numbers.size(); j++){
        if (numbers[j-1] < numbers[j]){
            w = true;
        }else{
            w = false;
            break;
        }
    }
    return w;
    }
};