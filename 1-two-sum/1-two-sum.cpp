class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
            unordered_map<int,int>memo;
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                    if(memo.find(target-nums[i])!=memo.end())
                    {
                            ans.assign({memo[target-nums[i]],i});
                            //ans.push_back(memo[target-nums[i]]);
                           // ans.push_back(i);
                            return ans;
                    }
                    memo[nums[i]]=i;
            }
            return ans;
    }
};