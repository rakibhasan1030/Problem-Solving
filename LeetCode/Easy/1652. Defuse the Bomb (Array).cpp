#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        // 2, 4, 9, 3
        int len = code.size();
        vector<int> res;

        for(int i = 0; i < len; i++){
            int key = abs(k), pos = i, temp = 0;

            if(k == 0){
                int l = len;
                while (l){
                    res.push_back(k);
                }
            }

            if(k > 0){
                while(key){
                    temp += code[(pos+1)%code.size()];
                    key--;
                    pos++;
                }
                res.push_back(temp);
            } 

            if(k < 0){
                while(key){
                    temp += code[(code.size()-(pos+1))%code.size()];
                    key--;
                    pos++;
                }
                res.push_back(temp);
            } 
        }

        for(auto i : res){
            cout << i << "     ";
        }

    }
};