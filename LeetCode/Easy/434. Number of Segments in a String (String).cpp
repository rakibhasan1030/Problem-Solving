#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello, my name is John";
    int word = 0;

    for(int i = 0; i <= s.size(); i ++){
        if (s[i] == ' ' || s[i] == '\0'){
            word++;
        }
    }

    return 0;
}
