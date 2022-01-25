
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence = "I speak Goat Latin", t = "", result;
    int space = 0;
    for(int i = 0; i <= sentence.size(); i++)
    {
        if (isspace(sentence[i]) || sentence[i] == '\0'){
            space++;

            if(t[0] == 'a' || t[0] == 'A' ||
                    t[0] == 'e' || t[0] == 'E' ||
                    t[0] == 'i' || t[0] == 'I' ||
                    t[0] == 'o' || t[0] == 'O' ||
                    t[0] == 'u' || t[0] == 'U'){
                        int tempSpace = space;
                t += "ma";
                while(tempSpace){
                    t += "a";
                    tempSpace--;
                }
            }else{

                //cout<< space << endl;
                //cout << endl;
                string temp;
                char firstValue;

                for(int j = 0; j < t.size(); j++){
                    if (j == 0){
                        firstValue = t[j];
                    }else{
                        temp += t[j];
                    }
                }
                temp.push_back(firstValue);
                temp += "ma";
                int tempSpace = space;
                while(tempSpace){
                    temp += "a";
                    tempSpace--;
                }
                //cout << temp << endl;
                t += temp;
                temp = "";
            }

            result += t + " ";
            cout << result << endl;
            t = "";
        } else {
            t += sentence[i];
        }
    }
    //cout<< result << endl;
    return 0;
}
