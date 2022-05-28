class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>memo;
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
            for(int i=0;i<nums.size();i++)
            {
                memo[nums[i]]++;    
            }
            
          for(auto it=memo.begin();it!=memo.end();it++)
          {
             pq.push({it->second,it->first});
          }
            
                     for(int i=0;i<k;i++)
                     {
                         ans.push_back(pq.top().second);
                             pq.pop();
                     }
            return ans;
            
            
    }
};