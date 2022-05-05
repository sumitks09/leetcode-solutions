class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>memo;
            int y=0;
            for(int i=0;i<nums.size();i++)
            {
                    memo[nums[i]]++;
            }
            for(auto x:memo)
            {
                    if(x.second==1)
                    {
                    y=x.first;        
                    }
            }
            return y;
    }
};