#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int counter = 0, temp;
    for(string s : sentences){
        temp = 0;
        for(char c : s){
            if (c == ' '){
                temp++;
            }
        }
        if(counter < temp){
            counter = temp;
        }
    }
    return counter+1;
    }
};