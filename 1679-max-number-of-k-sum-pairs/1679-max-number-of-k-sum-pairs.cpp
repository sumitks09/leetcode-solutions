class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>memo;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if (memo.find(k-nums[i])!=memo.end())
            {
                if(memo[k-nums[i]]>0)
                {
                 memo[k-nums[i]]--;
                 memo[nums[i]]--;
                cnt++;
            }
            }
            
            
                memo[nums[i]]++;
            
        }
        return cnt;
            
    }
};