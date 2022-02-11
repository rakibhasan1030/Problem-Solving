#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "5F3Z-2e-9-w", temp, ans;
    int k = 4, sz, firstGroupQuantity, restOfGroupQuantity;

    sz = s.size();

    for(int i = 0; i <= sz; i++){
        if(s[i] != '-' && s[i] != '\0'){
            temp += s[i]; // separate all char in a string without dashes
        }
    }

    //calculation
    firstGroupQuantity = sz % k;
    restOfGroupQuantity = sz / k;

    int tempS = temp.size();

    for(int j = 0; j < tempS; j++){
        if(firstGroupQuantity > 0 && j + 1 == firstGroupQuantity){
            ans += '-';
        } else if(restOfGroupQuantity > 0 && j + 1 == restOfGroupQuantity){
             ans += '-';
        }
        ans += temp;
    }

    cout<< ans;
    return 0;
}
