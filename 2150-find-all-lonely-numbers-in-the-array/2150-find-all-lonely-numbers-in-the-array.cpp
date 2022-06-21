class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int temp=0;
        if(nums.size()<=1)
        {
            return nums;
        }
        for(int i=1;i<nums.size()-1;i++)
        {
             temp=nums[i];
            if(nums[i]==nums[i+1] || nums[i]==nums[i-1])
            {
                continue;
            }
            if(temp-1!=nums[i-1] && temp+1!=nums[i+1])
            {
                ans.push_back(temp);
            }
        }
        temp=nums[0];
        if(temp+1!=nums[1] && nums[0]!=nums[1])
        {
            ans.push_back(temp);
        }
        
        temp=nums[nums.size()-1];
        if(nums[nums.size()-1]!=nums[nums.size()-2] && temp-1!=nums[nums.size()-2])
        {
            ans.push_back(temp);
        }
        
        return ans;
    }
};