#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, result;

    cin>> n;

    result = n * (n+12) / 2; // here, three mathmatical operation occur( * , + , /) and one assignment operation(=)

    cout << result; //this is not a complexity, because, it'll execute once

    return 0;
}

/*
    In this program total operation is 4 and It'll be always 4. Beacause, here number of operation is not dependent on input.
    Time complexity of this program is O(1).
    Time complexity of a program will always Big O(1) or O(1) or Order(1), when the number of operation is not dependent on input of a program.
*/
