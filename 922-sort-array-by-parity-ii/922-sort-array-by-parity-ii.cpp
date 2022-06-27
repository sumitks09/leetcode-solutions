class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        
       int l=0;
        int k=0;
        int j=0;
        while(j<nums.size())
        {
            if(j%2==0)
            {
                nums[j]=even[k];
            k++;    
            }
            else
            {
                nums[j]=odd[l];
                l++;
            }
            j++;
        }
        return nums;
        
    }
};