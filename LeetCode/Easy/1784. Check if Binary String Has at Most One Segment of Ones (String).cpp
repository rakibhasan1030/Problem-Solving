#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1001";
    bool ans;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1' && s[i+1] == '1' && s[i+1] != '\0'){
            ans = true;
            break;
        }else{
            ans = false;
        }
    }

    return ans;
}
