class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int ps=0;
        unordered_map<int,int>memo;
        for(int i=0;i<nums.size();i++)
        {
            ps+=nums[i];
            ps=ps%k;
            if(ps==0 && i)
            {
                return true;
            }
            if(memo.find(ps)!=memo.end())
            {
                if(i-memo[ps]>1)
                {
                    return  true;
                }
                
            }
            else
            memo[ps]=i;
        }
        return false;
    }
};