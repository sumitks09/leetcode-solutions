class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        unordered_map<int,int>memo;
        int n=nums.size();
        int currsum=0;
        int count=0;
        
        for(int i=0;i<n;i++)
        {
           currsum+=nums[i];
            if(currsum==k)
            {
                count+=1;
            }
            if(memo.find(currsum-k)!=memo.end())
            {
                count+=memo[currsum-k];
            }
            
            memo[currsum]++;
            
        }
        return count;
    }
};

 