class Solution {
public:
    static bool cmp(pair<string,int>a,pair<string,int>b)
    {
        if(a.second>b.second)
        {
            return true;
        }
        else if(a.second==b.second)
        {
            if(a.first<b.first)
            {
                return true;
            }
        }
        else
        {
            return false;
        }
        return false;
        
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>memo;
        for(int i=0;i<words.size();i++)
        {
            memo[words[i]]++;
        }
        
        vector<pair<string,int>>vec;
        
        for(auto it=memo.begin();it!=memo.end();it++)
        {
            vec.push_back(make_pair(it->first,it->second));
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        vector<string>result;
        for(auto x:vec)
        {
            if(k>0)
            {
                result.push_back(x.first);
                
            }
            k--;
        }
        return result;
        
        
        
    }
};