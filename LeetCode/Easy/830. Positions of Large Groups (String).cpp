#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abbxxxxzzy";
    int c;

    for(int i = 0; i < s.size(); i++){

        if(s[i] == s[i+1]){
            c++;
        }
    }
    cout<< c ;

    return 0;
}
