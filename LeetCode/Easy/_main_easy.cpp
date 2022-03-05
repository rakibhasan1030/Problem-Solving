#include <bits/stdc++.h>
#include "1470. Shuffle the Array (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> ans = s.shuffle(nums, n);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << "   "; 
    }
    return 0;
}