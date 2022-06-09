class Solution {
        private:
        void helper( vector<int>&temp,vector<vector<int>>&ans,int index,vector<int>& nums)
        {
                if(index>=nums.size())
                {
                   ans.push_back(temp);
                        return;
                }
                
                //include
                temp.push_back(nums[index]);
                helper(temp,ans,index+1,nums);
                
                //exclude
                temp.pop_back();
                helper(temp,ans,index+1,nums);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
            vector<vector<int>>ans;
            helper(temp,ans,0,nums);
            return ans;
    }
};