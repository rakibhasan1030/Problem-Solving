        int x = 0;
        for(int i = 0; i < operations.size(); i++){

            if(operations[i] == "X++" || operations[i] == "++X"){
                x++;
            }else if(operations[i] == "X--" || operations[i] == "--X"){
                x--;
            }
        }
        return x;
