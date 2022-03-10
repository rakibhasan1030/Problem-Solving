#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countValidWords(string sentence) {
    string temp;
    int ans = 0;
    vector<string> v;

    for(int i = 0; i < sentence.size(); i++){
        if (sentence[i] != ' '){
            temp += sentence[i];
        }
        if(sentence[i] != ' ' && sentence[i+1] == ' ' || sentence[i] != ' ' && sentence[i+1] == '\0'){
            v.push_back(temp);
            temp = "";
        }

    }
    for(int i = 0; i < v.size(); i++){
        if (isValid(v[i])) ans++;

    }
    return ans;
    }


    bool isValid(string s) {
        int hyphens = 0, n = s.size();

        for (int i = 0; i < n; i++) {

            if (isalpha(s[i])) continue;

            if (isdigit(s[i])) return false;

            if ((s[i] == '.' || s[i] == ',' || s[i] == '!') && i != n-1) return false;

            if (s[i] == '-') {
                if (hyphens || i == 0 || !isalpha(s[i-1]) || i == n-1 || !isalpha(s[i+1])) return false;
                hyphens++;
            }
        }

        return true;
    }

};
