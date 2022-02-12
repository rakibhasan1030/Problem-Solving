#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1100";
    int sz = s.size(), c = 0;
    bool ans;

    for(int i = 0; i < sz; i++){
        if(s[i] == '1' && s[i+1] == '1'){
            c++;
        }
    }
    if (sz > 1){
        if(c == 1){
            ans = true;
        }else{
            ans = false;
        }
    }else{
        ans = false;
    }
    cout << ans;
    return ans;
}
