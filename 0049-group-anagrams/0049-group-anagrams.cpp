class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>memo;
        vector<vector<string>>ans;
        
        for(auto x:strs)
        {
            string temp=x;
            sort(temp.begin(),temp.end());
           memo[temp].push_back(x);    
        }
        
        for(auto it=memo.begin();it!=memo.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
        
    }
};