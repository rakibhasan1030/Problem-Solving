#include <bits/stdc++.h>
#include "228. Summary Ranges.cpp"
using namespace std;
int main()
{
    Solution s;
    vector<string> a;
    vector<int> nums = {0,1,2,4,5,7};
    a = s.summaryRanges(nums);

    for (size_t i = 0; i < a.size(); i++)
    {
        /* code */
        cout << a[i] << ", ";
    }
    

    return 0;
}
