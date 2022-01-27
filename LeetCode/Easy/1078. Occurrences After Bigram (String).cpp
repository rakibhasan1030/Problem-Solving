#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<string> vec, result, x, y;
    string text = "alice is aa good girl she is a good student", first = "a", second = "good", temp, t;
    for (int i = 0; i < text.size()+1; i++)
    {
        if(text[i] != ' ') temp = temp + text[i];
        if(text[i] == ' ' || text[i] == '\0'){

            vec.push_back(temp);
            temp = "";
        }
    }

    for(int j = 0 ; j < vec.size(); j++){

        if (vec[j] == first){
            x.push_back(vec[j+2]);
            if(j == vec.size() - 1){
                t = x[x.size()-1];
                //cout<< x[x.size()-1] << endl;
                result.push_back(t);
                t = "";
            }
        } else if (vec[j] == second){
            y.push_back(vec[j+1]);
            if(j == vec.size() - 1){
                t = y[y.size()-1];
                //cout<< t<< endl;
                result.push_back(t);
                t = "";
            }
        }



    }

    //cout << x[x.size()-1] <<endl;

    //std::sort(result.begin(), result.end());
    //result.erase(std::unique(result.begin(), result.end()), result.end());

    for(auto s : result){
        //cout << s << " ";
    }
    return 0;
}
