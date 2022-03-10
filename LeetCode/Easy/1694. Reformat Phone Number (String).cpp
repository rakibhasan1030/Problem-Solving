#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reformatNumber(string number) { 
   string ans="";
    string s="";
    for(auto x:number){
        if(x==' '|| x=='-'){
            continue;
        }
        else{
            s+=x;
        }
    }
    int i=0;
    int k=s.length()/3;
    if(s.length()%3==1){
        k--;
    }
    while(k!=0){
        ans=ans+s[i]+s[i+1]+s[i+2];
        i=i+3;
        if(i!=s.length()){
            ans+='-';
        }
        k--;
    }
    while(i<s.length()){
        ans=ans+s[i]+s[i+1];
        i=i+2;
        if(i!=s.length()){
            ans+='-';
        }
    }
        return ans;
    }
};