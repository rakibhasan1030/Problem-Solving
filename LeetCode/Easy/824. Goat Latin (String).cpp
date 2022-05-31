#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toGoatLatin(string sentence) {
    string t = "", result;
    int space = 0;
    for(int i = 0; i <= sentence.size(); i++) {
        if (isspace(sentence[i]) || sentence[i] == '\0') {
            space++;

            if(t[0] == 'a' || t[0] == 'A' ||
                    t[0] == 'e' || t[0] == 'E' ||
                    t[0] == 'i' || t[0] == 'I' ||
                    t[0] == 'o' || t[0] == 'O' ||
                    t[0] == 'u' || t[0] == 'U') {
                int tempSpace = space;
                t += "ma";
                while(tempSpace) {
                    t += "a";
                    tempSpace--;
                }
                if (space != 1) {
                    result += " " +  t;
                } else result += t;

            }else {
                string temp;
                char firstValue;

                for(int j = 0; j < t.size(); j++) {
                    if (j == 0){
                        firstValue = t[j];
                    }else{
                        temp += t[j];
                    }
                }
                temp.push_back(firstValue);
                temp += "ma";
                int tempSpace = space;
                while(tempSpace) {
                    temp += "a";
                    tempSpace--;
                }
                if (space != 1) {
                    result += " " + temp;
                } else result += temp;
                temp = "";
            }
            t = "";
        }else {
            t += sentence[i];
        }
    }
        return result;
    }
};
