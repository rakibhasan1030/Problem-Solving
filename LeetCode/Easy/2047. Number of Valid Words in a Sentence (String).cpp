#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence = "alice and  bob are playing stone-game10", temp;
    int isValid;
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
        cout<< v[i] << endl;


    }
    return 0;
}
