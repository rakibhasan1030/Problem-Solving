        vector<string>store,ans;
        stringstream ss(text);
        string word;
        while(ss >> word)
        {
            store.push_back(word);
        }
        
        int n = store.size();
        for(int i=0;i<n;i++)
        {
            if(store[i]==first && store[i+1]==second && i+2<n)
            {
                ans.push_back(store[i+2]);
            }
        }
        return ans;