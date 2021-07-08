class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string prefix="";
        int len = strs.size();
        int min_len = min(strs[0].size() ,strs[len-1].size());
        for(int i=0; i<min_len ; i++)
        {
            if(strs[0][i] == strs[len-1][i])
                prefix +=strs[0][i];
            else
                break;
        }
        
        return prefix ;  
    }
};
