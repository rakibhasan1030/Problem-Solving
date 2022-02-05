#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s = "?zs", ans;
    //cout << char((int)a + 1);

    for (int i = 0; i < s.size(); i++){

        if(s[i] == '?'){
            if (i == 0 && s[i] == 'z'){
                ans += char((int)s[i+1] - 1);
            }else if(i == 0 && s[i] == 'a'){
                ans += char((int)s[i+1] + 1);
            }else {

            }
        }else{
            ans += s[i];
        }
    }

    return 0;
}
