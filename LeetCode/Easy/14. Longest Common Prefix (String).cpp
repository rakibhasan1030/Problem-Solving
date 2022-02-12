#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    if(strs.size() <= 0) {

    }

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++){
        //cout<< "strs["<<i<<"] : " << strs[i] << endl;
        while(strs[i].find(prefix) == string::npos){
            cout<< "strs["<<i<<"] : " << strs[i] << endl;
            //cout<< "POPED : "<< prefix << endl;
            prefix.pop_back();
            //cout<< "POPED : "<< prefix << endl;
        }
    }
    cout<< "POPED : "<< prefix << endl;
    return 0;
    }
