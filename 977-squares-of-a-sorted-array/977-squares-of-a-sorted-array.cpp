class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
                nums[i]=pow(nums[i],2);
        }
            sort(nums.begin(),nums.end());
            return nums;
    }
};