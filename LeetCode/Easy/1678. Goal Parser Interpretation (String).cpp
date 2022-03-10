#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string interpret(string command) {
    string str = "";
    int commandSize = command.size();
    for(int i = 0; i < commandSize; i++)
    {
        if(command[i] == 'G')
        {
            str = str + "G";
        }
        else if (command[i] == '(')
        {
            if(command[i+1] == ')')
            {
                str = str + "o";
            }
            else
            {
                str = str + "al";
            }
        }
    }
    return str;
    }
};