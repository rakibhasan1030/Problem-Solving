#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> decrypt(vector<int> &code, int k){
        // 2, 4, 9, 3
        int len = code.size();
        vector<int> res(len);
        if(k > 0){
            for (int i = 0; i < len; i++){
                for (int j = 1; j <= k; j++){
                    res[i] += code[(i+j)%len];
                }
            }
        }else if(k < 0){
            for (int i = 0; i < len; i++){
                for (int j = 1; j <= -1 * k; j++){
                    res[i] += code[(i-j+len)%len];
                }
            }
        }else{
            for (int i = 0; i < len; i++){
                res[i] += k;
            } 
        }
        return res;
    }
};