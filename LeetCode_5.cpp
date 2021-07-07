class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();
        vector<bool>kids;
        int max=0;
        for(int i=0; i<len; i++)
        {
            if(candies[i]>max)
                max=candies[i];
        }
        for(int i=0; i<len; i++)
        {
            if(candies[i]+extraCandies >= max)
                kids.push_back(true);
            else
                kids.push_back(false);
        }
        return kids ;
        
    }
};
