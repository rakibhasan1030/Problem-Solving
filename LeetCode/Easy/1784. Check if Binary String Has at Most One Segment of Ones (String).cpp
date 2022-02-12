#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1001";
    int sz = s.size();
    bool ans;

    for(int i = 0; i < sz; i++){
        if(sz > 1){
            if(s[i] == '1' && s[i+1] == '1' && s[i+1] != '\0'){
                ans = true;
                break;
            }else{
                ans = false;
            }
        }else{
            ans = true;
        }
    }
    return ans;
}
