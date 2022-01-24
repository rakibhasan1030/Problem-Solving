    string f, s, t;
    for (auto i : firstWord){
        f = f + to_string(((int)i - (int)97));
    }
    for (auto i : secondWord){
        s = s + to_string(((int)i - (int)97));
    }
    for (auto i : targetWord){
        t = t + to_string(((int)i - (int)97));
    }

    if((stoi(f) + stoi(s)) == stoi(t)){
        return true;
    }
    return false;   