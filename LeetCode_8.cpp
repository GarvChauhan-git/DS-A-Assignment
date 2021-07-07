class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int c=0;
        vector<int> res ;
        //sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0 ;i<nums.size() ; i++)
        {
            c=0;
            for(int j=0 ; j<nums.size() ; j++)
            {
                if(nums[i]>nums[j] && j!=i)
                {
                    c++;
                }
            }
            res.push_back(c);
        }
        return res ;
        
    }
};
