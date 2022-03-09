#include <bits/stdc++.h>
#include "1929. Concatenation of Array (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1};
    vector<int> n = s.getConcatenation(nums);
    for (auto i : n)
    {
        cout << i << " ";
    }
    
    return 0;
}