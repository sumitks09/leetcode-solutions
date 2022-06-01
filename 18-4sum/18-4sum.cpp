class Solution
{
    public:
        vector<vector < int>> fourSum(vector<int> &nums, int target)
        {
            sort(nums.begin(), nums.end());
            set<vector < int>> s;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        int x = (long long) target - (long long) nums[i] - (long long) nums[j] - (long long) nums[k];

                        if (binary_search(nums.begin() + k + 1, nums.end(), x))
                        {
                            vector<int> ans;
                            ans.push_back(nums[i]);
                            ans.push_back(nums[j]);
                            ans.push_back(nums[k]);
                            ans.push_back(x);
                            sort(ans.begin(), ans.end());
                            s.insert(ans);
                        }
                    }
                }
            }
                vector<vector<int>>result(s.begin(),s.end());
                                    return result;
        }
};