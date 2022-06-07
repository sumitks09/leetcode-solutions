class Solution
{
    private:
        void helper(vector<int> &nums, vector<int> ans, vector< vector< int>> &result, int n, int index,set<vector<int> > &set_vec)
        {
            if (index == n)
            {
                set_vec.insert(ans);
                return;
            }

        else
        {
                
                //consider

            ans.push_back(nums[index]);
            helper(nums, ans, result, n, index + 1,set_vec);
            ans.pop_back();
                
                
                //ignore
                
           // while (index + 1 < n && nums[index] == nums[index + 1]) index++;
            helper(nums, ans, result, n, index + 1,set_vec);

           	
        }
    }

    public:
        vector<vector < int>> subsetsWithDup(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            vector<int> ans;
                set<vector<int> > set_vec;
            vector<vector < int>> result;
            helper(nums, ans, result, n, 0,set_vec);
                for(auto i:set_vec)
                {
                        result.emplace_back(i);
                }
                 sort(result.begin(), result.end());
            return result;
        }
};