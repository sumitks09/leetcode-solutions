class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int ans=0;
            for (int i = 0; i < s.size(); i++)
            {
                unordered_set<char> se;
                for (int j = i; j < s.size(); j++) {
                    if(se.find(s[j])!=se.end())
                    {
                        break;
                    }
                    se.insert(s[j]);
                    ans=max(ans,(int)se.size());
                }
            }
            return ans;
        }
};