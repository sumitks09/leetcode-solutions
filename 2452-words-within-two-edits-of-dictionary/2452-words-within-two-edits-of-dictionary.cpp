class Solution {
    private:
    int helper(string a,string b)
    {
        int cnt=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dic) {
        vector<string>ans;
        for(int i=0;i<queries.size();i++)
        {
            string x=queries[i];
            for(int j=0;j<dic.size();j++)
            {
                string y=dic[j];
                int check=helper(x,y);
                if(check<=2)
                {
                  ans.push_back(x);  
                    break;
                }
            }
        }
        return ans;
    }
};