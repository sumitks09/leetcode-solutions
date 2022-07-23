class Solution {
public:
    int solve(vector<int> nums,int level)
    {
	    //base condition: we are at final level then return first element
		// Refer to ex: if we're at level 5 directly return nums[0]=8
        if(nums.size()==level)
        {
            return nums[0];
        }
        // Update the nums array with sum of ith and (i+1)th element
		// 1 2 3 4 5 => 3 5 7 9
        for(int i=0; i<nums.size()-level; i++)
        {
            nums[i] = (nums[i]+nums[i+1])%10;
        }
		
		// Recursive call for next level -- increase level by 1 
        return solve(nums, level+1);
    }
    int triangularSum(vector<int>& nums) {
        int sum=solve(nums,1);
        return sum;
        
    }
};