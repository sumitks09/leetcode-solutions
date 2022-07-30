class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int k=0;
        int j=1;
        vector<int>result(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
              result[k]=nums[i];
                k+=2;
            }
            else
            {
                result[j]=nums[i];
                    j+=2;
            }
        }
        return result;
    }
};