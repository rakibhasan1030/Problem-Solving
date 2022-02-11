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
    int tempS = temp.size();
    firstGroupQuantity = tempS % k;



    for(int j = 0; j < tempS; j++){
        if(firstGroupQuantity > 0 && j == firstGroupQuantity){
            ans += '-';
        } else if(j == k){
             ans += '-';
        }
        ans += temp[j];
    }
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
    cout << "firstGroupQuantity = " << firstGroupQuantity << "   |   " << "tempS = " << tempS << "   |   " << ans;
    return 0;
}
