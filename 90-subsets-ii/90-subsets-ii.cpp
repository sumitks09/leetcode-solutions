class Solution {
        private:
        void helper(vector<int> &temp, vector<vector< int >> &ans, int index, vector< int > &nums,set<vector<int>>&result)
        {
            if (index >= nums.size())
            {
                result.insert(temp);
                return;
            }

           	//include
            temp.push_back(nums[index]);
            helper(temp, ans, index + 1, nums,result);

           	//exclude
            temp.pop_back();
            helper(temp, ans, index + 1, nums,result);
        }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
             sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
            vector<int>temp;
            set<vector<int>>result;
            helper(temp,ans,0,nums,result);
            
            for(auto x:result)
            {
                    ans.push_back(x);
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};