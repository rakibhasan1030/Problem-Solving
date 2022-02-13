#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string prefix, temp, preTemp;
    if(strs.size() <= 0)
    {

    }

    prefix = strs[0];
    cout << prefix << " : " << prefix.size() << endl;
    cout << endl;
    cout << endl;
    preTemp = prefix;
    for (int i = 1; i < strs.size(); i++)
    {
        temp = strs[i];
        cout << temp << endl;
        for(int j = 0; j < prefix.size(); j++)
        {
            if(preTemp[j] == temp[j])
            {
                cout << j << " : " << "continue"<< endl;
                continue;
            }
            else
            {
                cout << j << " : " << "pop_back"<< endl;
                preTemp.pop_back();
            }
        }
        cout << endl;
        cout << preTemp << endl;
        cout << endl;
    }

    cout << "preTemp : " << preTemp << endl;
    return 0;
}
