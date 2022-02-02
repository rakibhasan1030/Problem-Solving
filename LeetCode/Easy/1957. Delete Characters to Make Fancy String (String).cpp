#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aaaaaabaabaabaa"; //"aabaabaabaa"
    int i = 1, c = 1;

    for(i; i <= s.size(); i++){
        if(s[i-1] == s[i]){
            c++;
            if(c > 2){
                cout << endl;
                cout << endl;
                cout<< "c = " << c << "   " << "s = " << s << "   " << "i = " << i << endl;
                s.erase(i, 1);
                cout<< "c = " << c << "   " << "s = " << s << "   " << "i = " << i << endl;
            }
        }
    }
    cout<< s << endl;
    return 0;
}
