#include <bits/stdc++.h>
#include "1725. Number Of Rectangles That Can Form The Largest Square (Array).cpp"
using namespace std;
int main()
{
    Solution s;
    vector<vector<int>> rectangles  = {{5,8},{3,9},{5,12},{16,5}};
    int ans = s.countGoodRectangles(rectangles);
    cout << endl;
    cout << endl;
    //cout << "Ans : " << ans << endl;
    return 0;
}