class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>memo;
        int cnt=0;
        for(auto x:nums)
        {
            memo[x]++;
        }
        
        for(auto x:memo)
        {
            if(k==0)
            {
                if(x.second>1)
                {
                    cnt++;
                }
            }
            else if (memo.find(k+x.first)!=memo.end())
            {
                cnt++;
            }
        }
        return cnt;
    }
};