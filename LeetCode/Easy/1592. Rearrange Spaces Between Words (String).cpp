#include <bits/stdc++.h>
using namespace std;
int main(){
    string text = "  this   is  a sentence ";
    int i = 0, string_len = 0, total_space = 0, total_word = 0, between_space = 0, end_space = 0;
    string_len = text.size();
    char prev_char;



    prev_char = '\0';

    while(1){ //infinite loop
        if(s[i] == ' ' || s[i] == '\0'){
            total_space++;
            if(s[i] != ' ' || s[i] != '\0'){
                total_word++;
            }

        }
        prev_char = s[i];

        if(s[i] == '\0'){
            break;
        }else{
            i++;
        }
    }


    cout << "Total Space - " << total_space << "   " << "Total Word - " << total_word;
}
