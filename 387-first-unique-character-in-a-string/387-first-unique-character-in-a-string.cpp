class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>memo;
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            memo[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(memo[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
        
    }
};