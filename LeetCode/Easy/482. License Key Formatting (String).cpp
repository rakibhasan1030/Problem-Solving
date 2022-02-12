#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "a-a-a-a-", temp, ans;
    int k = 1, tempK = 0, sz, firstGroupQuantity, restOfGroupQuantity;

    sz = s.size();

    for(int i = 0; i <= sz; i++){
        if(s[i] != '-' && s[i] != '\0'){
            temp += s[i]; // separate all char in a string without dashes
        }
    }


    //calculation
    int tempS = temp.size();
    firstGroupQuantity = tempS % k;

    //cout << "temp : " << temp << "   "  << tempS <<endl;
    tempK = k;
    for(int j = 0; j <= tempS; j++){
        ans += temp[j];
        if(firstGroupQuantity > 0 && j+1 == firstGroupQuantity && temp[j+1] != '\0'){
            ans += '-';
            cout << "temp[" << j << "]" << "   -   " << temp[j] << endl;
        }
        //cout << "ch = " << temp[j] << "  " << "ch + 1 = " << temp[j+1] << endl;

        cout << ">>----->> tempK = " << tempK << endl;
        cout << ">>----->> J = " << j+1 << endl;
        if(j+1 == firstGroupQuantity + tempK && temp[j+1] != '\0'){
             ans += '-';
             tempK += k;
             cout << "temp[" << j << "]" << "   -   " << temp[j] << "   |   " << "K = " << k << endl;
        }
    }
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
    cout << "firstGroupQuantity = " << firstGroupQuantity << "   |   " << "tempS = " << tempS << "   |   " << ans;
    return 0;
}
