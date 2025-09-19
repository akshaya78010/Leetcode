class Spreadsheet {
public:
map<string,int>mpp;
    Spreadsheet(int rows) {
         
    }

    bool check(string str)
{
    for(int i =0; i < str.size() ; i++)
        {
            if(isdigit(str[i]) == 0)
            {
                return false;
            }
        }
    return true;
}

    void setCell(string cell, int value) {
        mpp[cell] = value;
    }
    
    void resetCell(string cell) {
        mpp[cell] = 0;
    }
    
    int getValue(string formula) {
        string new_str = "";
        int x = 0;
        int value =0 ;
        // stack<int>st;
        for(int i =0; i < formula.size() ; i++)
            {
                if(isalpha(formula[i]))
                {
                    // new_str+=formula[i];
                    x = i;
                    break;
                }
            }

        for(int i = 1 ; i < formula.size() ; i++)
            {
                if(formula[i] == '+')
                {
                    if(check(new_str) == true)
                    {
                        value+=stoi(new_str);
                        cout<<new_str<<"\n";
                    }
                    else{
                    value+=mpp[new_str];
                        cout<<new_str<<" "<<mpp[new_str]<<"\n";
                    }
                    new_str = "";
                }
                new_str+=formula[i];
            }
        new_str = new_str.substr(1,new_str.size()-1);
                   if(check(new_str) == true)
                    {
                        value+=stoi(new_str);
                        cout<<new_str<<"\n";
                    }
                    else{
                    value+=mpp[new_str];
                        cout<<new_str<<" "<<mpp[new_str]<<"\n";
                    }
        return value;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */