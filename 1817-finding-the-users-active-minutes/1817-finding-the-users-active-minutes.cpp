class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
      
        vector<int>res(k,0);
        map<int,set<int>>m;
        for(vector<int>temp:logs){
            m[temp[0]].insert(temp[1]);
        }
        for(auto it:m){
         
                res[it.second.size()-1]++;
        }
        return res;
    }
};