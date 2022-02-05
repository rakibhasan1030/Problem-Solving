#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s = "???z???", ans;
    int n = s.size(), i = 0, j = 0;
    if (n <= 1 && s[i] != '?'){
        ans += s[i];
    } else if (n <= 1 && s[i] == '?'){
        ans += 'a';
    } else{
        for (i = 0; i < n; i++){
            //cout << s[i] << " ";
            char c = s[i];
            if(c == '?'){
                for (j = i+1; j < n; j++){
                    if (s[j] != '?'){
                        if(s[j] == 'z'){
                            char ch = char((int)s[j] - 1);
                            if (ans[i-1] == ch || ans[i+1] == ch){
                                ch = char((int)s[j] - 2);
                                ans += ch;
                            }else {
                                ans += ch;
                            }
                        }else if (s[j] == 'a'){
                            char ch = char((int)s[j] + 1);
                            if (ans[i - 1] == ch || ans[i+1] == ch){
                                ch = char((int)s[j] + 2);
                                ans += ch;
                            }else {
                                ans += ch;
                            }
                        }else {
                            char ch = char((int)s[j] + 1);
                            if (ans[i - 1] == ch || ans[i+1] == ch){
                                ch = char((int)s[j] - 2);
                                ans += ch;
                            }else {
                                ans += ch;
                            }
                        }
                    }
                }
            } else{
                ans += s[i];
            }
        }
    }

    //cout<< ans;
    return 0;
}


//            if (i == 0 && s[i+1] == 'z' || i == n - 1 && s[i-1] == 'z'){
//                ans += char((int)s[i+1] - 1);
//            }else if(i == 0 && s[i+1] == 'a' || i == n - 1 && s[i-1] == 'a'){
//                ans += char((int)s[i+1] + 1);
//            }else{
//                ans += char((int)s[i+1] + 1);
//            }
