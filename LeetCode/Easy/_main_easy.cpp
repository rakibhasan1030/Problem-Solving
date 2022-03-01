#include <bits/stdc++.h>
#include "1287. Element Appearing More Than 25% In Sorted Array(Array).cpp"
using namespace std;
int main()
{
    Solution s;
    int ans;
    vector<int> arr = {1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 12, 12};
    ans = s.findSpecialInteger(arr);
    cout << ans << endl;
    return 0;
}