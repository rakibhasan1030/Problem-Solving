class Solution {
public:
    int maxScore(string s) {
    string x;
    int zeros = 0, ones = 0, sumOfOnesAndZeros = 0, ans = 0;
    while (s.size()){
        x.push_back(s[0]);
        s.erase(0, 1);

        if(s.size() > 0){
            for(int i = 0; i < x.size(); i++){ // LEFT
                if(x[i] == '0'){
                    zeros++;
                }
            }

            for(int i = 0; i < s.size(); i++){ // RIGHT
                if(s[i] == '1'){
                    ones++;
                }
            }
        }
        sumOfOnesAndZeros = zeros+ones;
        if(sumOfOnesAndZeros > ans) ans = sumOfOnesAndZeros;
        zeros = 0;
        ones = 0;
    }
    return ans;
    }
};
