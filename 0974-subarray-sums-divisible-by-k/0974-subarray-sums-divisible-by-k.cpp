class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ps=0;
        int cnt=0;
        unordered_map<int,int>memo;
        memo[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            ps+=nums[i];
            int r=ps%k;
            if(r<0)   r+=k;
            
            if(memo.find(r)!=memo.end())
            {
                cnt+=memo[r];
            }
            memo[r]++;
        }
        return cnt;
    }
};