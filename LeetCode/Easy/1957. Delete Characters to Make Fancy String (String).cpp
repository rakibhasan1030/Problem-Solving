#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aaaaaabaabaabaa"; //"aabaabaabaa"
    int i = 1, c = 1;
    for(i; i <= s.size(); i++){
        cout<< s[i-1] << " == "<< s[i] << endl;
        if(s[i-1] == s[i]){
            c++;
            cout<< c << endl;
            if(c > 2){
                s.erase(i, 1);
                //c = 1;
            }
        }
    }
    cout<< s << endl;
    return 0;
}
