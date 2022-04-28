class Solution {
        private:
        void solve( vector<vector<int>>&ans,vector<int>output,int index,vector<int>& nums)
        {
        
                if(index>=nums.size())
                {
                        ans.push_back(output);
                        return;
                }
                //exclude
                solve(ans,output,index+1,nums);
                //include
                output.push_back(nums[index]);
                solve(ans,output,index+1,nums);
                
                
                
        }
        
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
            vector<int>output;
            solve(ans,output,0,nums);
            return ans;
    }
};