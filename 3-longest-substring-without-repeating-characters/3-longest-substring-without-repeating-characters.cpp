class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {

            int ans = 0;

            for (int i = 0; i < s.size(); i++)
            {
                unordered_set<int> set;
                for (int j = i; j < s.size(); j++)
                {
                    if (set.find(s[j]) != set.end())
                    {

                        break;
                    }
                    set.insert(s[j]);
                    ans = max(ans, (int) set.size());
                }
            }
            return ans;
        }
};