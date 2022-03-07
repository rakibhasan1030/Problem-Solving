#include <bits/stdc++.h>
#include "1752. Check if Array Is Sorted and Rotated (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> n = {3, 4, 5, 1, 2};
    bool ans = s.check(n);
    ans == true ? cout << "TRUE" : cout << "FALSE"; 
    return 0;
}