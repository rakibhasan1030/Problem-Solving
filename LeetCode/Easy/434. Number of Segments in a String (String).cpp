#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello, my name is John";
    int word = 0;
    if (s.size() > 0){
        for(int i = 0; i <= s.size(); i ++){
            if (isalpha(s[i])){
                cout<< s[i] << endl;
                word++;
            }
        }
    }
    //cout << word;
    return 0;
}
