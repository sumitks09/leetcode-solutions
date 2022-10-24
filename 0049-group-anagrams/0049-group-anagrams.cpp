class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        for(auto x:strs)
        {
            string temp=x;
            sort(temp.begin(),temp.end());
            umap[temp].push_back(x);
        }
        
        vector<vector<string>>ans;
        for(auto z:umap)
        {
            vector<string>temp=z.second;
            ans.push_back(temp);
        }
        return ans;
    }
};