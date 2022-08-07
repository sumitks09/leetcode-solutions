class Solution
{
    public:
        string longestCommonPrefix(vector<string> strs)
        {
            int n = strs.size();
            sort(strs.begin(), strs.end());

            string s1 = strs[0];
            string s2 = strs[n - 1];
            string ans = "";
            int m;

            if (s1.size() > s2.size())
                m = s2.size();
            else
                m = s1.size();

            for (int i = 0; i < m; i++)
            {
                if (s1[i] == s2[i])
                    ans.push_back(s1[i]);
                else
                    break;
            }
            return ans;
        }
};