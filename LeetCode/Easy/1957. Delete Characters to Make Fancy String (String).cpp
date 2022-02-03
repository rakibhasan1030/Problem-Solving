#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aaaaaabaabaabaa", ans; //"aabaabaabaa"
    int i = 0, j = 0;
    for(i; i < s.size(); i++){
        if(i < 2){
            ans += s[i]; //aa
            j++; //1 [0,1,2]
            cout << "IF ----- " << "j = " << j << "   " << "ans = " << ans << "   " << "i = " << i << endl;
        }else{
            if((ans[j-1] != s[i]) || (ans[j-2] != s[i])){
                ans += s[i];
                j++;
                cout << "ELSE ----- "  << "j = " << j << "   " << "ans = " << ans << "   " << "i = " << i << endl;
            }
        }
    }
    cout<< ans << endl;
    return 0;
}
