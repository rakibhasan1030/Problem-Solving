#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "5F3Z-2e-9-w", temp, ans;
    int k = 4, sz;

    sz = s.size();

    for(int i = 0; i <= sz; i++){
        if(s[i] != '-' && s[i] != '\0'){
            temp += s[i]; // separate all char in a string without dashes
        }
    }



    cout<< temp;
    return 0;
}
