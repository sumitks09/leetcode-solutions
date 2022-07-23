class Solution
{
    private:
        static bool cmp(const string &s1, const string &s2)
        {
            return ((s1 + s2) > (s2 + s1));
        }

    public:
        string largestNumber(vector<int> &nums)
        {
            int maxi=*max_element(nums.begin(),nums.end());
            
            if(maxi==0)
            {
                return "0";
            }
            vector<string> ans;
            for (int i = 0; i < nums.size(); i++)
            {
                ans.push_back(to_string(nums[i]));
            }
        sort(ans.begin(),ans.end(),cmp);
            string temp = "";
            for (int i = 0; i < ans.size(); i++)
            {
                temp += ans[i];
            }
            return temp;
        }
};