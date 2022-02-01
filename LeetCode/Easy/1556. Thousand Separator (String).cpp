#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1987, nSize;
    string ans, s = "";
    s = to_string(n);
    nSize = s.size();

    if (nSize <= 3){
        ans = s;
    }else{
        for(int i = s.size()-1; i >= 0; i--){
            cout << s[i] << endl;
        }
    }
    cout << ans << endl;
    return 0;
}
