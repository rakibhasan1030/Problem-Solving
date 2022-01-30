#include<bits/stdc++.h>
using namespace std;
int main()
{
    string date = "20th Oct 2052", temp, _day, _month, _year;
    int n = 0;
    map<string, string>::iterator itr;
    map<string, string> month;
    month.insert(pair<string, string>("Jan", "01"));
    month.insert(pair<string, string>("Feb", "02"));
    month.insert(pair<string, string>("Mar", "03"));
    month.insert(pair<string, string>("Apr", "04"));
    month.insert(pair<string, string>("May", "05"));
    month.insert(pair<string, string>("Jun", "06"));
    month.insert(pair<string, string>("Jul", "07"));
    month.insert(pair<string, string>("Aug", "08"));
    month.insert(pair<string, string>("Sep", "09"));
    month.insert(pair<string, string>("Oct", "10"));
    month.insert(pair<string, string>("Nov", "11"));
    month.insert(pair<string, string>("Dec", "12"));

    for (int i = 0 ; i <= date.size(); i++)
    {
        temp += date[i];
        if(date[i] == ' ' || date[i] == '\0')
        {
            ++n;
            temp.pop_back(); // remove extra space from month name

            if (n == 1)
            {
                temp.pop_back();
                temp.pop_back();
                _day = temp;
            }
            else if (n == 2)
            {
                for (itr = month.begin(); itr != month.end(); ++itr)
                {
                    if(itr -> first == temp){
                        _month = "-" + itr -> second + "-";
                    }
                }
            }
            else
            {
                _year = temp;
            }
            temp = "";
        }
    }
    cout << _year+_month+_day << '\n';
    return 0;
}
