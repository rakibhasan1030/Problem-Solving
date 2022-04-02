#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool isPalindrome(string s, int i, int j){
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        if (s.size() < 3 ) return true; /* Boundary cases */

        int i = 0, j = s.size() -1;

        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                /* here, we delete the index by increasing i or decerasing j and checck for palindrome */
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }
        }
        return true;
    }
    
};