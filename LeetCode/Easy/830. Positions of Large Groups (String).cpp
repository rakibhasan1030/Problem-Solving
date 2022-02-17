#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcdddeeeeaabbbcd";
    int a = 0, b = 0;
    vector<vector<int>> z;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i-1] && s[i] == s[i+1] && s[i-1] != '\0' && s[i+1] != '\0'){ // for first letter
            a = i;
           // cout << "(" << i << ")" << s[i];
        } else if (s[i] == s[i-1] && s[i] == s[i+1] && s[i-1] != '\0' && s[i+1] != '\0'){ // for middle letter
            //cout << s[i];
        } else if (s[i] == s[i-1] && s[i] != s[i+1] && s[i-1] != '\0' && s[i+1] != '\0'){ // for last letter
            b = i;
           // cout << s[i] << "(" << i << ")";
           // cout << "   |   ";
        }
        if(b - a >= 2){
            vector<int> y;
            y.push_back(a);
            y.push_back(b);
            z.push_back(y);
            a = 0;
            b = 0;
        }
    }
    //cout <<endl;
    for (auto i : z){
        cout <<"[" << i[0] <<"," << i[1] << "]";
    }

    return 0;
}
