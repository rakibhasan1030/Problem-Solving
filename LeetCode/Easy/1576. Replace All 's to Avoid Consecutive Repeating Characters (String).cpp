#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s = "?zs", ans;
    int n = s.size();
    for (int i = 0; i < n; i++){

        if(s[i] == '?'){

        }else{
            ans += s[i];
        }
    }
    cout<< ans;
    return 0;
}
