class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
    unordered_map<int,int>memo;
        for(int i=0;i<nums.size();i++)
        {
            memo[nums[i]]++;
        }
        for(auto x:memo)
        {
            if(x.second==1)
            {
                if(memo.find(x.first-1)==memo.end() && memo.find(x.first+1)==memo.end())
                {
                    ans.push_back(x.first);
                }
            }
        }
        return ans;
        
        
    }
};