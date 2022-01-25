
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence = "I speak Goat Iatin", t = "", result;
    int space = 0;
    for(int i = 0; i <= sentence.size(); i++){
        if (!isspace(sentence[i]) || sentence[i] != '\0') t += sentence[i];

        if (isspace(sentence[i]) || sentence[i] == '\0'){
            space++;
            
            if(t[0] == 'a' || t[0] == 'A' ||
                    t[0] == 'e' || t[0] == 'E' ||
                    t[0] == 'i' || t[0] == 'I' ||
                    t[0] == 'o' || t[0] == 'O' ||
                    t[0] == 'u' || t[0] == 'U'){

                //cout<< "before : " << t <<endl;
                t += "ma";
                cout<< space << endl;
                while(space){
                    t += "a";
                    //cout<< space << " : " << t << endl;
                    space--;
                }
                //cout<< "after : " << t <<endl;
            }
            result += t + " ";
            t = "";
        }
    }
    //cout<< result << endl;
    return 0;
}
