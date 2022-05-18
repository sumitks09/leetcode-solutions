class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
            for(int i=0;i<s.size();i++)
            {
                   if(st.size()==0)
                   {
                           st.push(s[i]);
                   }
                    else if(st.top()==s[i])
                    {
                            st.pop();
                    }
                    else
                    {
                            st.push(s[i]);
                    }              
            }
            
            string v="";
            while(!st.empty())
            {
                    v+=st.top();
                    st.pop();
            }
            reverse(v.begin(),v.end());
            return v;
            
    }
};