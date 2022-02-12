class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
    string temp, ans;
    int tempK = 0, sz, firstGroupQuantity, restOfGroupQuantity;

    sz = s.size();

    for(int i = 0; i <= sz; i++){
        if(s[i] != '-' && s[i] != '\0'){
            temp += s[i]; // separate all char in a string without dashes
        }
    }


    //calculation
    int tempS = temp.size();
    firstGroupQuantity = tempS % k;

    tempK = k;
    for(int j = 0; j <= tempS; j++){
        ans += temp[j];
        if(firstGroupQuantity > 0 && j+1 == firstGroupQuantity && temp[j+1] != '\0'){
            ans += '-';
        }

        if(j+1 == firstGroupQuantity + tempK && temp[j+1] != '\0'){
             ans += '-';
             tempK += k;
        }
    }
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
    ans.pop_back(); //remove the last null space
    return ans;
    }
};
