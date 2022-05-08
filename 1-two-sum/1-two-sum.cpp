class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>memo;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if (memo.find(target-nums[i])!=memo.end())
            {
                ans.push_back(memo[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            memo[nums[i]]=i;   
        }
     return ans;
    }
    
};