#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string title) {
    string ans, temp;
    char c;
    for(int i = 0; i <= title.size(); i++){
        c = title[i];
        temp += c;

        if(c == ' ' || c == '\0'){
            temp.pop_back(); // remove the last space
            if(temp.size() <= 2){
                for(int j = 0; j < temp.size(); j++){
                    if(isupper(temp[j])){
                        ans += tolower(temp[j]);
                    }else{
                        ans += tolower(temp[j]);
                    }
                }
                ans += " ";
            } else{
                for(int j = 0; j < temp.size(); j++){
                    if( j == 0 && islower(temp[j])){
                        ans += toupper(temp[j]);
                    }else if( j == 0 && isupper(temp[j])){
                        ans += toupper(temp[j]);
                    }else{
                        ans += tolower(temp[j]);
                    }

                }
                ans += " ";
            }
            temp = "";
        }
    }
    ans.pop_back();
    return ans;
    }
};
