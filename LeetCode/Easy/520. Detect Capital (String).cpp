#include<bits/stdc++.h>
using namespace std;
int main(){

    string word = "FlaG";
    int n, upper = 0, lower = 0;
    n = word.size();
    for (int i = 0; i< n; i++){
            if(isupper(word[i])){
                upper++;
            }else{
                lower++;
            }
    }
    if (upper == n || lower == n){
        cout<< "true";
    }else {
        if (upper == 1 && isupper(word[0])){
            cout << "true";
        }else{
            cout << "false";
        }
    }
    return 0;
}
