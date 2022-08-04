class Solution {
    private:
    void helper(vector<int>&nums,vector<vector<int>>&vec,vector<int>&ans,int current,int target)
    {
        if(current==nums.size())
        {
            if(target==0)
            {
                vec.push_back(ans);
            }
            return;
        }
        
        if(nums[current]<=target)
        {
            ans.push_back(nums[current]);
            helper(nums,vec,ans,current,target-nums[current]);
            ans.pop_back();
        }
        //exclude
        helper(nums,vec,ans,current+1,target);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>vec;
        vector<int>ans;
        helper(nums,vec,ans,0,target);
        return vec;
        
    }
};