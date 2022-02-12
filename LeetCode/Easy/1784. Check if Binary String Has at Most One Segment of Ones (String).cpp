#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "10";
    int sz = s.size(), c = 0;
    bool ans;

    for(int i = 0; i < sz; i++){
        if(s[i] == '1' && s[i+1] == '1' || s[i+1] != '\0'){
            c++;
        }
    }
    cout << ans;
    return ans;
}
