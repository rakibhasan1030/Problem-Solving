    map<int, string>mp;
    string w="";
    s.push_back(' ');
    for(auto i : s)
    {
        if (i == ' ')
        {
            string num = "";
            while(w.back() >= '0' && w.back() <= '9')
            {
                num = (char)(w.back()) + num;
                w.pop_back();
            }
            int val = stoi(num);
            mp[val] = w;
            w = "";
        }
        else
        {
            w += (char)i;
    
        }
    }
    string ans = "";
    for(auto i : mp)
    {
        ans += i.second;
        ans += (char)' ';
    }
    ans.pop_back();
    return ans;