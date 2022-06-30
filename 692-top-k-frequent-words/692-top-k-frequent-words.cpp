class Solution {
public:
    static bool cmp(pair<string,int>&a,pair<string,int>&b)
    {
        if(a.second>b.second)
            return true;
        //if the count of two strings is equal, then check for the lexographically smaller string
        if(a.second==b.second)
        {
            if(a.first<b.first)
                return true;
        }
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>m;
        for(auto i: words)
        {
            m[i]++;
        }
        vector<pair<string,int>>v;
        for(auto it:m)
        {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),cmp);
        vector<string> ans;
        for(auto x:v)
        {
            if(k>0)
            {
                ans.push_back(x.first);
                k--;
            }
        }
        
        return ans;
    }
};