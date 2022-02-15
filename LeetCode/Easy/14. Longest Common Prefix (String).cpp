#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"flower","flow","flight"};
        //string res;
        auto res = strs.front();
        int len=0,j=0;
        //traverse through each string array
        for(int i=1;i<strs.size();i++){
            //iterate each string
            if(res[0]!=strs[i][0]){

            }
            len = res.length()>strs[i].length()?strs[i].length():res.length();

            for(j=0;j<len;j++){
                if(res[j]!=strs[i][j]){
                    break;
                }
            }
            //erase the extra or not equal elements
            res.erase(j);
        }
        cout<<res;
    return 0;
}
