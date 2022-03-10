/*APPROACH:
At first find all consecutive groups of the same character.
Traverse the string s and check if s[ i ] is equal s[ i + 1 ], then it will be a group, so stored the fist position of the group in a.
After that, checked if s[ i ] is equal to s[ i - 1 ] and also s[ i ] not equal to s[ i + 1 ], that means the previous char is same as s[ i ] but next char is not equal. It means it will be the last char of the group, So, also store this last position of this group in b. But most importantly, check if i is greater than 0, because, if i is equal or less than 0, then where the condition s[ i - 1 ] is checked, it'll find the value of ( -1 ) position, that doesn't exists, and it'll give run time error (overflow).
Then, checked the difference between first and last position, if the result is greater or equal 2 then it'll contain at least char.
And pushed the value to a vector. and returned! */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
    int a = 0, b = 0;
    vector<vector<int>> z;
    for(int i = 0; i < s.size(); i++){
		if(i <= 0){ //it will show run time exeption(overflow) if i don't check this condition
            if(s[i] == s[i+1] && s[i+1] != '\0'){  // for first letter
                a = i;
            }
        }else{
            if(s[i] != s[i-1] && s[i] == s[i+1] && s[i-1]){  // for first letter
                a = i;
            } else if (s[i] == s[i-1] && s[i] != s[i+1]){  // for last letter
                b = i;
            }
        }
        if(b - a >= 2){
            vector<int> y;
            y.push_back(a);
            y.push_back(b);
            z.push_back(y);
            a = 0;
            b = 0;
        }
    }
    return z;
}
};
