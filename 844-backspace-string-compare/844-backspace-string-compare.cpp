class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
            stack<char>st2;
            for(int i=0;i<s.size();i++)
            {
                 if(s[i]=='#'&&!st.empty())
                 {
                         st.pop();
                 }
                    else if(s[i]>=67&&s[i]<=122)
                    {
                            st.push(s[i]);
                    }
            }
            for(int i=0;i<t.size();i++)
            {
                 if(t[i]=='#'&&!st2.empty())
                 {
                         st2.pop();
                 }
                    else if(t[i]>=67 && t[i]<=122)
                    {
                            st2.push(t[i]);
                    }
            }
            return st==st2;
          
    }
};