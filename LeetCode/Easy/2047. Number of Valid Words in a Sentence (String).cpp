#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence = "alice and  bob are playing stone-game10", temp;
    int isInvalid = 0, h = 0, p = 0;
    vector<string> v;

    for(int i = 0; i < sentence.size(); i++){
        if (sentence[i] != ' '){
            temp += sentence[i];
        }
        if(sentence[i] != ' ' && sentence[i+1] == ' ' || sentence[i] != ' ' && sentence[i+1] == '\0'){
            v.push_back(temp);
            temp = "";
        }

    }
    for(int i = 0; i < v.size(); i++){
        string s = v[i];
        cout<< s << endl;
        for(int j = 0; j < s.size(); i++){
            if(isdigit(s[i])){
                isInvalid++;
                break;
            }
        }
    }
    return 0;
}

