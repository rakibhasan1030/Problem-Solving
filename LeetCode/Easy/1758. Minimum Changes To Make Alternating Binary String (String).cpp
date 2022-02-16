#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "10010100", zeroLeading;
    int z = 0, o = 0;
    if(s.size() > 2){
        for(int i = 0; i < s.size(); i+=2){
            if (s[i] == '0' && s[i+1] != '\0'){
                if(s[i+1] == '1'){
                    zeroLeading += s[i];
                }else if(s[i+1] == '0'){
                    zeroLeading += '1';
                }
            }else if (s[i] == '1' && s[i+1] != '\0'){
                if(s[i+1] == '0'){
                    zeroLeading += s[i];
                }else if(s[i+1] == '1'){
                    zeroLeading += '0';
                }
            }
        }
    }
    cout << zeroLeading;
    return 0;
}
