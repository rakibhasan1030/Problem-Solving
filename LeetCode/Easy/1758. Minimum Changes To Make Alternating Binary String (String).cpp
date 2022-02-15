#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "01001110";

    for(int i = 0; i < s.size(); i++){
        if (s[i+1] != '\0'){
            if (s[i] == '0'){
                s = s[i+1] == 1 ? 1 : 1;
            }else{
                s = s[i+1] == 0 ? 0 : 0;
            }
        }
    }
    cout<< s << endl;
    return 0;
}
