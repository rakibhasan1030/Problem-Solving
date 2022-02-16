#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "01001110";
    int c;

    for(int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            if(s[i+1] == '1'){
                continue;
            }else{
                c++;
            }
        }else{
            if(s[i+1] == '0'){
                continue;
            }else{
                c++;
            }
        }
    }
    cout << c;
    return 0;
}
