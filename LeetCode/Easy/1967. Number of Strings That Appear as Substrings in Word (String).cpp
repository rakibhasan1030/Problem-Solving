    int c = 0;
    for(int i=0; i<patterns.size(); i++){
        if(word.find(patterns[i])!= string::npos) c++;
    }
    return c;
