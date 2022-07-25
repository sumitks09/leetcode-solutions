

class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>memo,memo2;
        for(int i=0;i<s.size();i++)
            memo[s[i]]++;
        for(int i=0;i<order.size();i++)
            memo2[order[i]]++;
        
        string ans="";
        
        for(int i=0;i<order.size();i++)
        {
            int k=memo[order[i]];
            while(k--)
                ans+=order[i];
        }
        for(int i=0;i<s.size();i++)
            if(!memo2[s[i]])
                ans+=s[i];
        return ans;
    }
};