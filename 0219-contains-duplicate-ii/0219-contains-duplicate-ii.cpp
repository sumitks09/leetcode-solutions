class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>memo;
        for(int i=0;i<nums.size();i++)
        {
            if(memo.find(nums[i])!=memo.end())
            {
                if(abs(i-memo[nums[i]])<=k)
                {
                    return true;
                }
            }
            
                memo[nums[i]]=i;
            
        }
        return false;
    }
};