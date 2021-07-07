class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int len = accounts.size();
        int max=0,sum=0;
        for(int i=0; i< accounts.size(); i++)
        {
            sum=0;
            for(int k=0 ; k<accounts[i].size() ; k++)
            {
                sum = accounts[i][k]+sum;
            }
            if(sum>max)
                max=sum;
        }
        return max;
    }
};
