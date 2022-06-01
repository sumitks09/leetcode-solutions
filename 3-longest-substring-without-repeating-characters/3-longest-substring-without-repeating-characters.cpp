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
                        ans = max(ans, (int)set.size());
                }
            }
            return ans;
        }
};
/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_set<char> st;
            for(int j = i; j < s.length(); j++) {
                if(st.find(s[j]) != st.end()) {
                    break;
                }
                st.insert(s[j]);
                ans = std::max(ans, (int)st.size());
            }
        }
        return ans;*/
   