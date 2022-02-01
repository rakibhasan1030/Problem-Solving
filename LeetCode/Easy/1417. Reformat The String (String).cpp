#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "a0b1c2", ch, digits, ans;
    int diffSize, chSize, digitsSize;
    for(auto i : s){
        if (isdigit(i)){
            ch.push_back(i);
        }else{
            digits.push_back(i);
        }
    }
    chSize = ch.size();
    digitsSize = digits.size();
    diffSize = ch.size() - digits.size();

    if(diffSize == -1 || diffSize == 0 ||diffSize == 1){

        for (int j = 0; j < s.size(); j++){
            if(j <= chSize){
                ans.push_back(ch[j]);
            }

            if(j <= digitsSize){
                ans.push_back(digits[j]);
            }
        }
    }else {
        ans = "";
    }
    ans.pop_back();
    cout<< ans;
    return 0;
}
