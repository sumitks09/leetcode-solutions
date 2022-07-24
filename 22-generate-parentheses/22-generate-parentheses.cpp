class Solution {
    private:
    void helper(vector<string> &s,int oc,int cc,string temp,int n)
    {
        if(oc==n && cc==n)
        {
            s.push_back(temp);
            return;
        }
        if(oc<n)
        {
        helper(s,oc+1,cc,temp+'(',n);
        }
        if(cc<oc)
        {
        helper(s,oc,cc+1,temp+')',n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        int oc=0;
        int cc=0;
        vector<string>s;
        string temp="";
        helper(s,oc,cc,temp,n);
        return s;
    }
};