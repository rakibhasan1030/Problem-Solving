#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "110";
    bool ans = s.find("01") == string::npos;
    cout << ans;
    return ans;
}
