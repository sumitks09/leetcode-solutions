class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int ans=1;
        if(nums.size()<=1)
        {
            return nums.size();
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                count++;
                ans=max(ans,count);
            }
            else if(nums[i]==nums[i-1])
            {
                continue;
            }
            else
            {
               // ans=max(ans,count);
                count=1;
            }
        }
        return ans;
    }
};