class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>memo;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(memo[k-nums[i]]>0)
            {
                memo[k-nums[i]]--;
                cnt++;
            }
            else
            {
                memo[nums[i]]++;
            }
        }
        return cnt;
            
    }
};