#include<bits/stdc++.h>
using namespace std;
int main(){

    string number = "1-23-45 6", n, result;
    for(auto i : number){
        if (isspace(i) || i == '-') continue;
        else n.push_back(i);
    }

    cout << n.size() << " : " << n << endl;
    n.erase(n.begin());
    cout << n.size() << " : " << n << endl;
    return 0;
}
