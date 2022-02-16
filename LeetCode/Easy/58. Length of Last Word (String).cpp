#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "luffy is still joyboy", temp;
    vector<string> st;
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            temp += s[i];
            if(isalpha(s[i]) && s[i+1] == ' ' || isalpha(s[i]) && s[i+1] == '\0'){
                st.push_back(temp);
                cout << temp << "   ";
                temp = "";
            }
        }
    }

    cout << st[st.size()-1].size() << endl;

    return 0;
}

