class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>Krow({{'q',1},{'w',1},{'e',1},{'r',1},{'t',1},{'y',1},{'u',1},
                                    {'i',1},{'o',1},{'p',1},{'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},
                                    {'k',2},{'l',2},{'z',3},{'x',3},{'c',3},{'v',3},{'b',3},{'n',3},{'m',3}});
        vector<string>res;
        for(int i =0 ;i<words.size(); i++)
        {
            int flag =0;
            int Rowno = Krow[tolower(words[i][0])];
            for(int k=1 ;k<words[i].size() ; k++)
            {
                if(Krow[tolower(words[i][k])] != Rowno)
                        {
                            flag = 1;
                            break;
                        }
            }
            if(flag == 0)
            {
                 res.push_back(words[i]);
            }
        }
    return res ;
    
    }
};
