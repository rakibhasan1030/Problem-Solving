#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
    string sum;
    int carry=0, count = 0, aLength=a.length(), bLength=b.length();    
    while(count < aLength || count < bLength || carry != 0){
        
        int x = 0;
        if(count < aLength && a[aLength-1-count] =='1') x  = 1; 
        
        int y = 0;
        if(count < bLength && b[bLength-1-count] =='1') y = 1;
     
        sum = to_string((x+y+carry) % 2) + sum;
        carry = (x+y+carry) / 2;
        
        count++;
    }
    return sum; 
    }
};