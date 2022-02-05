#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s = "?zs", ans;
    int n = s.size();
    for (int i = 0; i < n; i++){

        if(s[i] == '?'){
            if (i == 0 && s[i] == 'z' || i == n - 1 && s[i] == 'z'){
                ans += char((int)s[i+1] - 1);
            }else if(i == 0 && s[i] == 'a' || i == n - 1 && s[i] == 'a'){
                ans += char((int)s[i+1] + 1);
            }else{
                ans += char((int)s[i+1] + 1);
            }
        }else{
            ans += s[i];
        }
    }
    cout<< ans;
    return 0;
}
