#include <bits/stdc++.h>
using namespace std;
int main(){
    string text = "  this   is  a sentence ";
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



    cout << "Total Space - " << total_space << "   " << "Total Word - " << total_word;
}
