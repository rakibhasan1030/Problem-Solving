#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool threeConsecutiveOdds(vector<int> &arr){
        bool ans = false;
        int c = 1;
        for (int i = 1; i < arr.size(); i++){
            if (c != 3){
                if (arr[i - 1] % 2 == 1 && arr[i] % 2 == 1){
                    ans = true;
                    c++;
                }
                else{
                    c = 1;
                }
            }else{
                break;
            }
        }
        return c >= 3 ? ans : false;
    }
};