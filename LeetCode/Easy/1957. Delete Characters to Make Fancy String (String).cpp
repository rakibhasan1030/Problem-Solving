class Solution {
public:
    string makeFancyString(string s) {
    string ans;
    int i = 0, j = 0;
    for(i; i < s.size(); i++){
        if(i < 2){
            ans += s[i];
            j++;
        }else{
            if((ans[j-1] != s[i]) || (ans[j-2] != s[i])){
                ans += s[i];
                j++;

            }
        }
    }
    return ans;
    }
};
