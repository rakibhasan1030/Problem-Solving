#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "10010100";
    int z = 0, o = 0;
    if(s.size() > 2){
        for(int i = 0; i < s.size(); i+=2){
            if (s[i] == '0' && s[i+1] != '\0'){
                if(s[i+1] == '1'){
                    continue;
                }else{

                }
            }else if (s[i] == '1' && s[i+1] != '\0'){
                (s[i+1] == '0'){
                    continue;
                }else{

                }
            }
        }
    }
    cout << c;
    return 0;
}
