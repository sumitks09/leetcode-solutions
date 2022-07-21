class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long result=0;
        
        for(int i=0;i<nums.size();i++)
        {
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(int j=i;j<nums.size();j++)
            {
                maxi=max(nums[j],maxi);
                mini=min(nums[j],mini);
                result+=(maxi-mini);
                
            }
        }
        return result;
    }
};