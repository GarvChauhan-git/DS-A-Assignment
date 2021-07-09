class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int len = words.size();
        bool arr[26] = {false};
        for(char c : allowed)
            arr[c-'a']= true ;
        for(string str: words)
        {
            for(char c : str)
            {
                if(arr[c-'a'] == false)
                {
                    len--;
                    break;
                }
            }
        }
    return len ;
    }
};
