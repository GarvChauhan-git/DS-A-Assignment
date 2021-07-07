class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int GP=0 ,j=0,i;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1 ;j<nums.size(); j++)
            {
                if(nums[i] == nums[j])
                    GP++;
            }
        } 
        return GP;
    }
};
