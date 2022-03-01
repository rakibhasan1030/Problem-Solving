#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        //[ 1, 2, 2, 6, 6, 6, 6, 7, 10 ]
        int n, p, largestDuplicate = 0, ans = arr[0];
        n = n = arr.size();
        p = n / 4;

        for (int i = 0; i < n; i++)
        {
            int count = 1;
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (largestDuplicate <= count)
            {
                ans = arr[i];
                largestDuplicate = count;
            }
            count = 1;
        }
        return largestDuplicate >= p ? ans : ans;
    }
};