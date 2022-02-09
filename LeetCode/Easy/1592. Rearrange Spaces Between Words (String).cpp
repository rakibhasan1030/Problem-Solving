class Solution {
public:
    string reorderSpaces(string text) {
    string ans = "", temp = "";
    int i = 0, j = 0, string_len = 0, total_space = 0, total_word = 0, between_space = 0, end_space = 0;
    vector<string> s;
    string_len = text.size();
    char prev_char;

    prev_char = '\0';

    while(1){ //infinite loop
        if(text[i] == ' ' || text[i] == '\0'){
            total_space++;
            if(prev_char != ' ' && prev_char != '\0'){
                s.push_back(temp);
                total_word ++;
                temp = "";
            }
        }else temp += text[i];
        prev_char = text[i];
        if(text[i] == '\0'){
            break; //break loop
        } else{
            i++;
        }
    }

    total_space = total_space - 1; // minus 1 for '\0'

    if(total_word > 1){
        between_space = total_space / (total_word - 1);
        end_space = total_space % (total_word - 1);

        for(int i = 0; i < s.size(); i++){
            int t = between_space;
            ans += s[i];
            if(!(i == s.size() - 1)){
                while(t){
                    ans += ' ';
                    t--;
                }
            }else if (i == s.size()- 1 && end_space > 0){
                while(end_space){
                    ans += ' ';
                    end_space--;
                }
            }
        }

    }else{
        ans += s[0];
        while(total_space){
            ans += ' ';
            total_space--;
        }
    }
    return ans;
    }
};
