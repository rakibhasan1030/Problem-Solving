#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence = "alice and  bob are playing stone-game10", temp;
    int isValid = 0, h = 0, p = 0;
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
        if (!isdigit(v[i]) && h <= 1 && p <= 1){
            if(v[i] == '-' && isalpha(v[i-1]) && isalpha(v[i+1])){
                isValid++;
                h++;
            } else if(!isalpha(v[i]) && isalpha(v[i-1]) && v[i+1] == '\0'){ //its punctuation mark
                isValid++;
                p++;
            }
        }
    }
    return 0;
}
