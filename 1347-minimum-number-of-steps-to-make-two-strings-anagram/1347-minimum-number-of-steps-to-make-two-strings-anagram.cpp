class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>memo;
        for(int i=0;i<s.size();i++)
        {
            memo[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            memo[t[i]]--;
        }
        int sum=0;
        for(auto x:memo)
        {
            if(x.second>0)
                sum+=x.second;
        }
        return sum;
    }
};