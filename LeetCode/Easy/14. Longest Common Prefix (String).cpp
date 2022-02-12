#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"c","acc","ccc"};
    if(strs.size() <= 0)
    {

    }

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        while(strs[i].find(prefix) == string::npos)
        {
            prefix.pop_back();
        }
    }
    cout << prefix;
    return 0;
}
