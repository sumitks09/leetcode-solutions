class Solution {
public:
    string reverseWords(string s) {
        stack<string>St;
        string t="";
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                t+=s[i];
            }
            else if(s[i]==' ')
            {
                reverse(t.begin(),t.end());
                 St.push(t);
                t="";
            }
           
        }
        reverse(t.begin(),t.end());
        St.push(t);
        
        vector<string>str;
        while(!St.empty())
        {
            str.push_back(St.top());
            St.pop();
        }
        reverse(str.begin(),str.end());
        int i=0;
        int n=str.size();
        for(auto x:str)
        {
           ans+=x;
            if(i<n-1)
            {
            ans+=" ";
                i++;
            }
        }
        return ans;
        
        
            
    }
};