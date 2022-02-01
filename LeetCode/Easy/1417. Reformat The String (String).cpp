#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "covid2019", ch, digits, ans;
    int diffSize, chSize, digitsSize;
    for(auto i : s){
        if (isdigit(i) && i != '\0'){
            digits.push_back(i);
        }else if (!isdigit(i) && i != '\0'){
            ch.push_back(i);
        }
    }
    chSize = ch.size();
    digitsSize = digits.size();
    diffSize = ch.size() - digits.size();
    cout<< chSize << "   :   " << digitsSize << endl;
    if(diffSize == -1 || diffSize == 0 ||diffSize == 1){

        for (int j = 0; j < s.size(); j++){
            if(j <= chSize && ch[j] != '\0'){
                ans.push_back(ch[j]);
            }
            if(j <= digitsSize && ch[j] != '\0'){
                ans.push_back(digits[j]);
            }
        }
    }else {
        ans = "";
    }
    cout<< ans;
    return 0;
}
