class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            set<char>se;
            for(int j=i;j<s.size();j++)
            {
                if(se.find(s[j])!=se.end())
                {
                    break;
                }
                else
                {
                    se.insert(s[j]);
                }
            }
            res=max(res,(int)se.size());
            
            
        }
        return res;
    }
};