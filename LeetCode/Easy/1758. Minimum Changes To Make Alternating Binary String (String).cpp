#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "10", zeroLeading;
    int opZero = 0, opOne = 0, op = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(i%2 == 0)
        {
            if(s[i] == '0')
            {
                opZero++;
            }
            else
            {
                opOne++;
            }
        }
        else if(i%2 == 1)
        {
            if(s[i] == '1')
            {
                opOne++;
            }
            else
            {
                opZero++;
            }
        }
    }

    op = opZero < opOne ? opZero : opOne;

    cout << op;
    return 0;
}
