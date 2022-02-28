#include <bits/stdc++.h>
#include "1184. Distance Between Bus Stops(Array).cpp"
using namespace std;

int main()
{
    Solution s;
    int a;
    vector<int> distance  = {1,2,3,4};
    int start = 0, destination = 1;
    a = s.distanceBetweenBusStops(distance , start, destination);
    cout << "Ans = " << a << endl;
    return 0;
}