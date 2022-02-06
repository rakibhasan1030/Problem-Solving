#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "PPALLP";
    int n, a = 0, l = 0;
    n = s.size();

    for(int i = 0; i < n; i++){
        if(s[i] == 'A') a++;
        else if (s[i] == 'P' && s[i+1] == 'P' && s[i+2] == 'P') break;
    }


    retutn 0;
}
