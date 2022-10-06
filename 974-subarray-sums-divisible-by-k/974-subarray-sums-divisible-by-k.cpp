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
            int rem=ps%k;
            if(rem<0) rem+=k ; 
            if(memo.find(rem)!=memo.end())
            {
                cnt+=memo[rem];
            }
            memo[rem]++;
        }
        return cnt;
    }
};