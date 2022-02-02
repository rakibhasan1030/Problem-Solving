class Solution {
public:
    string thousandSeparator(int n) {
    int nSize, c = 0;
    string s = "", dot = ".";
    s = to_string(n);
    nSize = s.size();

    if (nSize <= 3){

    }else{
        for(int i = s.size()-1; i >= 0; i--){
            c++;
            if(c % 3 == 0 && i != 0){
                s.insert(i, dot);
            }
        }
    }
    return s;
    }
};
