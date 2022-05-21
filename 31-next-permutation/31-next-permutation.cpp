class Solution {
public:
    void nextPermutation(vector<int>& nums) {
            int j;
            int n=nums.size();
            for( j=n-2;j>=0;j--)
            {
                    if(nums[j]<nums[j+1])
                    {
                            break;
                    }
            }
            if(j>=0)
            {
            for(int k=n-1;k>=0;k--)
            {
                    if(nums[j]<nums[k])
                    {
                            swap(nums[j],nums[k]);
                            break;
                    }
            }
            }
            
            reverse(nums.begin()+j+1,nums.end());
            
            
        
    }
};