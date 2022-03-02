#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        //[ 25, 25, 38, 20, 15, 40 ]
        int largest = -1;
        for(int i = arr.size()-1; i >=0; --i){
            int temp = arr[i];
            arr[i] = largest;
            largest = max(temp, largest);
        }
        return arr;
    }
};