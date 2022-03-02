#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        //[ 25, 25, 38, 20, 15, 40 ]
        vector<int> ans;
        int n = arr.size();
        int temp = 0;

        for(int i = 0; i < n; i++){
            if(i == n - 1){
                ans.push_back(-1);
            }else{
                //cout << "i = " << i << endl;
                temp = arr[i+1];
                int j = i;
                int s = n-1;
                for(int k = i+2; k < n; k++){
                    //cout << "arr[k] = " << arr[k] << endl;
                    if(arr[k] > temp){
                        temp = arr[k];
                        //cout << "temp = " << temp << endl;
                    }
                }
                //cout << temp << endl;
                ans.push_back(temp);
                temp = 0;
                j = 0;
            }
        }
        for(auto m : ans){
            cout << m << "   ";
        }
        return ans;
    }
};