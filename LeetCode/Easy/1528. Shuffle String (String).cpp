    string str = "";
    int arrSize = indices.size();
    for(int i = 0; i < arrSize; i++)
    {
        for(int j = 0; j < arrSize; j++)
        {
            if(i == indices[j])
            {
                str = str + s[j];
            }
        }
    }
    return str;
