class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int,int>memo;
        for(int i=0;i<nums.size();i++)
        {
            
            cnt+=memo[nums[i]-k]+memo[k+nums[i]];
                memo[nums[i]]++;
            
        }
        return cnt;
        
    }
};