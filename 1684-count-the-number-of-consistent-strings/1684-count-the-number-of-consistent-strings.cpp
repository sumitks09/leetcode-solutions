class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>memo;
        int ans=0;
        for(int i=0;i<allowed.size();i++)
        {
            memo[allowed[i]]++;
        }
        
        for(int i=0;i<words.size();i++)
        {
            bool flag=true;
            for(int j=0;j<words[i].size();j++)
            {
                if(memo[words[i][j]]==0)
                {
                    flag=false;
                    break;
                }
                
            }
            if(flag==true)
                {
                    ans++;
                }
        }
        return ans;
    }
};