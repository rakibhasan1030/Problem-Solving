class Solution {
public:
    bool detectCapitalUse(string word) {
    int n, upper = 0, lower = 0;
    n = word.size();
    bool ans;
    for (int i = 0; i< n; i++){
            if(isupper(word[i])){
                upper++;
            }else{
                lower++;
            }
    }
    if (upper == n || lower == n){
         ans = true;
    }else {
        if (upper == 1 && isupper(word[0])){
            ans = true;
        }else{
            ans = false;
        }
    }
    return ans;
    }
};