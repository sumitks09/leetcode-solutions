class Solution {
public:
    void nextPermutation(vector<int>& nums) {
            int k;
            int i;
      for( k=nums.size()-2;k>=0;k--)
      {
              if(nums[k]<nums[k+1])
              {
                      break;
              }
      }
            if(k>=0)
            {
            for( i=nums.size()-1;i>=0;i--)
            {
                    if(nums[i]>nums[k])
                    {
                            swap(nums[i],nums[k]);
                            break;
                    }
            }
            }
            reverse(nums.begin()+k+1,nums.end());
            
    }
};