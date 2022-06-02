class Solution
{
    private:
        void helper(vector<int> &nums, vector<int> ans, vector< vector< int>> &result, int n, int index)
        {
            if (index == n)
            {
                result.push_back(ans);
                return;
            }

        else
        {
                
                //consider

            ans.push_back(nums[index]);
            helper(nums, ans, result, n, index + 1);
            ans.pop_back();
                
                
                //ignore
                
            while (index + 1 < n && nums[index] == nums[index + 1]) index++;
            helper(nums, ans, result, n, index + 1);

           	
        }
    }

    public:
        vector<vector < int>> subsetsWithDup(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            vector<int> ans;
            vector<vector < int>> result;
            helper(nums, ans, result, n, 0);
                 sort(result.begin(), result.end());
            return result;
        }
};