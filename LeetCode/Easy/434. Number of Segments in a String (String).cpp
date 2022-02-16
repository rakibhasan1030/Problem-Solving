#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello, my name is John";
    int word = 0;
    if (s.size() > 0){
        for(int i = 0; i <= s.size(); i ++){
            if (s[i] != ' ' && s[i+1] == ' ' || s[i] != ' ' && s[i+1] == '\0'){
                word++;
                cout<< s[i] << " : " << word << endl;
            }
        }
    }
    cout << word;
    return 0;
}
