class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        int x=nums[0];
        for(auto i:nums)
            count+=i-x;
        return count;
    }
};