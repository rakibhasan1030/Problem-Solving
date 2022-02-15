#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string res = strs.front();
    //cout << res << endl;

    int len = 0, j = 0;

    for(int i = 1; i < strs.size(); i++){
        if(res[0]!= strs[i][0]){
            //return "";
        }
        len = res.size() > strs[i].size() ? res.size() : strs[i].size();
        for(j; j < len; j++){
            if(res[j] != strs[i][j]){
                break;
            }
        }
        res.erase(j);
    }
    cout << res << endl;
    return 0;
}
