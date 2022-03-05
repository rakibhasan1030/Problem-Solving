#include <bits/stdc++.h>
#include "1431. Kids With the Greatest Number of Candies (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    int extraCandies = 3;
    vector<int> candies = {2, 3, 5, 1, 3};
    vector<bool> ans = s.kidsWithCandies(candies, extraCandies);
    for(auto i : ans){
       cout << i <<  "   ";
    }
    return 0;
}