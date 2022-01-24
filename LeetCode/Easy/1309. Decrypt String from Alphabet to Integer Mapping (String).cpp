    string ans = "";
    int len = s.size();

    for(int i = 0; i < len; ++i)
    {
        string temp_str = "";
        int temp_int = 0;
        char temp_char;

        if(len >= (i + 2))
        {
            if (s[i+2] == '#')
            {
                temp_str.push_back(s[i]);
                temp_str.push_back(s[i+1]);
                temp_int = stoi(temp_str) + 96;
                temp_char  = (char)temp_int;
                ans.push_back(temp_char);
                cout<<temp_char<<endl;
                i += 2;
            }
            else
            {
                temp_str.push_back(s[i]);
                temp_int = stoi(temp_str) + 96;
                temp_char  = (char)temp_int;
                ans.push_back(temp_char);
            }
        }
        else
        {
            temp_str.push_back(s[i]);
            temp_int = stoi(temp_str) + 96;
            temp_char  = (char)temp_int;
            ans.push_back(temp_char);
        }

    }
    return ans;