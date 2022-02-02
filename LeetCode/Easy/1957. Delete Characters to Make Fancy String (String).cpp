#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabaabaabaa"; //"aabaabaabaa"
    int i = 1, c = 1;

    for(i; i <= s.size(); i++){
        if(s[i-1] == s[i]){
            c++;
            if(c > 2){
                s.erase(i, 1);
            }
        }

    }
    cout<< s << endl;
    return 0;
}
