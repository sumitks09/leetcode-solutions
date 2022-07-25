

class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>m,m1;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        for(int i=0;i<order.size();i++)
            m1[order[i]]++;
        string ans="";
        for(int i=0;i<order.size();i++)
        {
            int k=m[order[i]];
            while(k--)
                ans+=order[i];
        }
        for(int i=0;i<s.size();i++)
            if(!m1[s[i]])
                ans+=s[i];
        return ans;
    }
};