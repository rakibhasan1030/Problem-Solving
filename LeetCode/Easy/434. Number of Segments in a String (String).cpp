/*APPROACH:

Given string s contains numbers of segment (words) which is separated by space and segment can contain alphabets, numbers and special characters.
I've check if the position of i contains no space (that means s[ i ] will be alphabets, numbers or special characters), then i also check the next position (i+1) is a space or null (end of string) so that i can find segment and increase word
Finally, return word */

class Solution {
public:
    int countSegments(string s) {
    int word = 0;
    for(int i = 0; i < s.size(); i ++){
        if (s[i] != ' ' && s[i+1] == ' ' || s[i] != ' ' && s[i+1] == '\0'){
            word++;
        }
    }
    return word;
    }
};
