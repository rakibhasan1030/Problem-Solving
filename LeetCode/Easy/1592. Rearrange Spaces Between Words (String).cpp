#include <bits/stdc++.h>
using namespace std;
int main(){
    string text = "  this   is  a sentence ";
    int string_len, total_space, total_word, between_space, end_space;
    string_len = text.size();
    for (int i = 0; i < string_len; i++){
        if(text [i] == ' '){
            total_space++;
        }

    }
    cout << total_space;
}
