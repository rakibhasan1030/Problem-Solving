/* APPROACH:
# Given String s has two possible way to occur with first position, either its 0 or 1.
# If it stats with 0, then all the even position contain 0 and also the odd position contain 1.
  For i, if s[ i ] do not follow the rule then we increase y
# On the other hand if it starts with 1 then all the even position contain 1 and also the odd position contain 0. and similarly,
  For i, if s[ i ] do not follow the rule then we increase x
# After that we find and return the minimum between x and y */



class Solution {
public:
    int minOperations(string s){
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++){
        if(i%2 == 0){
            if(s[i] == '1'){
                y++;
            }
            else{
                x++;
            }
        }
        else{
            if(s[i] == '0'){
                y++;
            }
            else{
                x++;
            }
        }
    }
    return x < y ? x : y;
}
};
