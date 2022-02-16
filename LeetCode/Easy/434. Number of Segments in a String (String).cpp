#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello, my name is John";
    int word = 0;
    if (s.size() > 0){
        for(int i = 0; i <= s.size(); i ++){
            cout<< s[i] << endl;
            if (s[i] != ' ' && s[i+1] == ' ' || s[i+1] == '\0'){
                //cout<< s[i] << endl;
                word++;
            }
        }
    }
    cout << word;
    return 0;
}
