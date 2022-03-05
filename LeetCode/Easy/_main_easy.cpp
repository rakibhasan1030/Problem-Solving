#include <bits/stdc++.h>
#include "1431. Kids With the Greatest Number of Candies (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    int extraCandies = 1;
    vector<int> candies = {4, 2, 1, 1, 2};
    vector<bool> ans = s.kidsWithCandies(candies, extraCandies);

    cout << "[ ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << " ]";
    return 0;
}