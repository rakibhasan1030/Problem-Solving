class Solution {
public:
    int minOperations(string s) {
    int opZero = 0, opOne = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(i%2 == 0)
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
        else
        {
            if(s[i] == '0')
            {
                opOne++;
            }
            else
            {
                opZero++;
            }
        }
    }

    return opZero < opOne ? opZero : opOne;
    }
};
