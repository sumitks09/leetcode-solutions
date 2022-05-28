class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        
        for(auto it = freq.begin(); it != freq.end(); it++)
            pq.push({it->second, it->first});
        
        for(int i = 0; i < k; i++){
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};