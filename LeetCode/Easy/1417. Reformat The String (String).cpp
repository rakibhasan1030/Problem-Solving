#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "a0b1c2", ch, digits;
    int maxSize = 0, chSize, digitsSize;
    for(auto i : s){
        if (isdigit(i)){
            ch.push_back(i);
        }else{
            digits.push_back(i);
        }
    }
    chSize = ch.size();
    digitsSize = digits.size();
    maxSize = chSize > digitsSize ? maxSize = chSize : maxSize = digitsSize;
    cout << ch << " : " << digits << "   |   " << maxSize;
    return 0;
}
