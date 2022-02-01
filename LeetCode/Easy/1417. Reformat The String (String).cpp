#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "j", ch, digits, ans;
    int diffSize = 0, chSize = 0, digitsSize = 0;
    for(auto i : s){
        if (isdigit(i) && i != '\0'){
            digits += i;
        }else if (!isdigit(i) && i != '\0'){
            ch += i;
        }
    }
    chSize = ch.size();
    digitsSize = digits.size();
    diffSize = ch.size() - digits.size();
    cout<< chSize << " - " << digitsSize << " = " <<diffSize << endl;

    if(diffSize == -1 || diffSize == 0 ||diffSize == 1){

        for (int j = 0; j < s.size(); j++){

            if (chSize > digitsSize){
                if(j <= chSize){

                    ans += ch[j];
                }
                if(j <= digitsSize){
                    ans += digits[j];
                }
            } else{
                if(j <= digitsSize){
                    ans += digits[j];
                }
                if(j <= chSize){
                    ans += ch[j];
                }
            }
        }
    }else {
        ans = "";
    }

    if (!ans.empty()){
        if(chSize > 0){
            ans.pop_back();
        }
        if(digitsSize > 0){
            ans.pop_back();
        }
    }
    cout<< ans.size()<< " : " << ans;
    return 0;
}
