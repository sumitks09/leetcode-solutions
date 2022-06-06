class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>memo;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            memo[nums[i]]++;
        }
        for(auto k:memo)
        {
            if(k.second>=2)
            {
                return k.first;
            }
        }
        return -1;
    }
};