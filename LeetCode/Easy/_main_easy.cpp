#include <bits/stdc++.h>
#include "1018. Binary Prefix Divisible By 5(Array).cpp"
using namespace std;

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1};
    vector<bool> ans;
    ans = s.prefixesDivBy5(nums);
    cout << "[ ";
    for(auto a : ans){
        cout << a << " ";
    }
    cout << " ]";
    return 0;
}