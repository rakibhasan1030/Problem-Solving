#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence = "cat and  dog", temp;

    for(int i = 0; i < sentence.size(); i++){
        if (sentence[i] != ' '){
            temp += sentence[i];
        }
        if(isalpha(sentence[i]) && sentence[i+1] == ' ' || isalpha(sentence[i]) && sentence[i+1] == '\0'){
            cout << temp << endl;
            temp = "";
        }

    }


    return 0;
}
