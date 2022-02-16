#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "   fly me   to   the moon  ", temp;
    vector<string> st;
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            temp += s[i];
            if(isalpha(s[i]) && s[i+1] == ' '){
                st.push_back(temp);
                temp = "";
            }
        }
    }

    cout << st[st.size()-1].size() << endl;

    return 0;
}

