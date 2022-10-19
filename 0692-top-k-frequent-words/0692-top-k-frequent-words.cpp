class Solution {
    public:
    static bool cmp(pair<string,int>&a,pair<string,int>&b)
    {
        if(a.second==b.second) return a.first<b.first;
        if(a.second>b.second) return true;
        return false;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
         //sort(words.begin(),words.end());
        vector<pair<string,int>>pq;
        unordered_map<string,int>memo;
        for(int i=0;i<words.size();i++)
        {
            memo[words[i]]++;
        }
        for(auto it=memo.begin();it!=memo.end();it++)
        {
            pq.push_back({it->first,it->second});
        }
        sort(pq.begin(),pq.end(),cmp);
        vector<string>result;
        int i=0;
        while(k--)
        {
            result.push_back(pq[i].first);
            i++;
        }
       
        return result;
        
    }
};