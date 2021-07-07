class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int temp;
        vector<int> res ;
        int size1 = nums1.size();
        int size2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0; i<size1 ; i++)
        {
            for(int j=0; j<size2 ;j++)
            {
                if(nums1[i]==nums2[j] && nums1[i]!=temp)
                {
                    temp = nums1[i];
                    res.push_back(nums1[i]);
                    break ;
                }
            }   
        }
      
    return res ;
    }
    
};
