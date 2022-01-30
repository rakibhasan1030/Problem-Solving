#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "011000111";
    int n, ones = 1, zeros = 1;
    n = s.size();

    for(int i = 1; i <= n; i++){
        if (n <= 1){
            if(s[0] == '1'){
                ones++;
            } else{
                zeros++;
            }
        } else{
            if(s[i-1] == s[i]){
                if(s[i] == '1'){
                    ones++;
                } else{
                    zeros++;
                }
            }
        }
    }
    cout << "ONES : " << ones << "   " << "ZEROS : " << zeros << endl;
    ones > zeros ? cout<< "true" : cout<<"false";
    return 0;
}
