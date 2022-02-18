#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence = "alice and  bob are playing stone-game10", temp;
    int isValid;

    for(int i = 0; i < sentence.size(); i++){
        if (sentence[i] != ' '){
            temp += sentence[i];
        }
        if(sentence[i] != ' ' && sentence[i+1] == ' ' || sentence[i] != ' ' && sentence[i+1] == '\0'){

            for(int j = 0; j < temp.size(); j++){
                if(!isdigit(temp[j])){
                    if(j == temp.size() - 1){
                        isValid++;
                    }
                }
                if(!isalpha(temp[j]) && !isdigit(temp[j])){
                    cout << temp[j];
                    if(j == temp.size() - 1){
                        isValid++;
                    }
                }

            }
            cout << endl;
            temp = "";
        }

    }

        cout << endl;
        cout << endl;
        cout << isValid << endl;

    return 0;
}
