#include <bits/stdc++.h>
using namespace std;
int main(){
    string text = " practice   makes   perfect", ans = "";
    int i = 0, j = 0, string_len = 0, total_space = 0, total_word = 0, between_space = 0, end_space = 0;
    string_len = text.size();
    char prev_char;

    prev_char = '\0';

    while(1){ //infinite loop
        if(text[i] == ' ' || text[i] == '\0'){
            total_space++;
            if(prev_char != ' ' && prev_char != '\0'){
                total_word ++;
            }
        }
        prev_char = text[i];
        if(text[i] == '\0'){
            break; //break loop
        } else{
            i++;
        }
    }

    total_space = total_space - 1; // minus 1 for '\0'

    if (total_word > 1){
        between_space = total_space / (total_word - 1);
        end_space = total_space % (total_word - 1);
    }

    prev_char = ' ';
    for(int i = 0; i <= string_len; i++){
       if(prev_char == ' ' && text[i] != ' ' || prev_char != ' ' && text[i] != ' ' ){
        ans += text[i];
       }else if (text[i] == ' ' && prev_char != ' ' && i+1 != string_len){
           for(int j = 0; j < between_space; j++){
                ans += " ";
           }
       }else if (text[i] == '\0' && prev_char != ' ' || text[i] == '\0' && prev_char == ' '){
           for(int k = 0; k < end_space; k++){
                ans += " ";
                cout << "Add Space" << endl;
           }
       }
       prev_char = text[i];
    }

    cout << "total_space : " << total_space << "\n" << "between_space : "  << between_space << "\n" << "end_space : " << end_space << endl;
    cout << "Text Size : " << string_len << "\n" << "Ans Size : "  << ans.size() << endl;

}
