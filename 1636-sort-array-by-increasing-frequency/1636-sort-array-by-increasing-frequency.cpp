class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
      if(a.second<b.second)
      {
          return true;
      }
        else if(a.second==b.second)
        {
            if(a.first>b.first)
            {
                return true;
            }
            return false;
        }
        return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>memo;
        for(int i=0;i<nums.size();i++)
        {
            memo[nums[i]]++;
        }
        
        vector<pair<int,int>>vec;
        for(auto it=memo.begin();it!=memo.end();it++)
        {
            vec.push_back(make_pair(it->first,it->second));
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        vector<int>x;
        for(auto y:vec)
        {
            while(y.second--)
            {
            x.push_back(y.first);
            }
        }
        return x;
    }
};