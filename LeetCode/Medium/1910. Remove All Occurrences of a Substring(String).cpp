#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "axxxxyyyyb", part = "xy";
    size_t found;
    found = s.find(part);
    cout << found << endl;
    s.replace(found, part.size(), "");
    return 0;
}
