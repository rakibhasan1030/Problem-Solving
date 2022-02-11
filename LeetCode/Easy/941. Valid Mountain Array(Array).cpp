#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int len, peek, peekPos;
        len = arr.size();
        bool res = false;

        peek = arr[0];
        for (int i = 0; i < len; i++) {
            if (peek < arr[i])
            {
                peek = arr[i];
                peekPos = i;
            }
        }
        if (len >= 3 && arr[0] != peek && arr[len - 1] != peek)
        {
            for (int i = 0; i < len - 1; i++)
            {
                if (arr[i] < arr[i + 1] && i <= peekPos || arr[i] > arr[i + 1] && i >= peekPos)
                {
                    res = true;
                }
                else
                {
                    res = false;
                    break;
                }
            }
        }
        return res;
    }
};