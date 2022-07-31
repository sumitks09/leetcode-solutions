#define uimap unordered_map<int,int>memo
#define pb push_back
#define vpii vector<pair<int,int>>
#define vi vector<int>
class Solution {
    
    private:
    static bool cmp(pair<int,int>&x1,pair<int,int>&x2)
    {
       if(x1.second==x2.second) return x1.first>x2.first;
        return x1.second<x2.second;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        uimap;
        vpii pq;
        vi result;
        for(const auto &x:nums)
        {
            memo[x]++;
        }
        
        for(auto it=memo.begin();it!=memo.end();it++)
            pq.pb({it->first,it->second});
        
        sort(pq.begin(),pq.end(),cmp);
        for(int i=0;i<pq.size();i++)
        {
            while(pq[i].second--)
            {
            result.pb(pq[i].first);
           }
        }
        return result;

        
    }
};