class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            int count=1;
            int helper=1;
            if(nums.size()==0)
            {
                    return 0;
            }
            sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
                if(nums[i]==nums[i-1]+1)
                {
                        count++;
                       
                }
                else if(nums[i]==nums[i-1])
                {
                        continue;
                }
                else
                {
                        count=1;
                }
                 helper=max(helper,count);
        }
            return helper;
    }
};