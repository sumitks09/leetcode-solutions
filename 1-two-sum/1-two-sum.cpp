class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>memo;
        for(int i=0;i<nums.size();i++)
        {
            if(memo.find(target-nums[i])!=memo.end())
            {
                return {memo[target-nums[i]],i};
            }
            memo[nums[i]]=i;
        }
        return {-1,-1};
    }
};