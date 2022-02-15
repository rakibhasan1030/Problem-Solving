class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string res = strs.front();
    int len = 0, j = 0;
    for(int i = 1; i < strs.size(); i++)
    {
        if(res[0]!= strs[i][0])
        {
            return "";
        }
        len = res.size() > strs[i].size() ? strs[i].size() : res.size();
        for(j = 0; j < len; j++)
        {
            if(res[j] != strs[i][j])
            {
                break;
            }
        }
        res.erase(j);
    }
    return res;
    }
};
