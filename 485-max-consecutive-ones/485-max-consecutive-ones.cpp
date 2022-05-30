class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
            int count=0;
            int helper=0;
        for(int i=0;i<nums.size();i++)
        {
                if(nums[i]==1)
                {
                        count++;
                        helper=max(helper,count);
                }
                else
                {
                        count=0;
                }
        }
            return helper;
    }
};