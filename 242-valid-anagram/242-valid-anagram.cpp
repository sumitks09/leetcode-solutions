#define ucmap unordered_map<char,int>
#define pb push_back
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        ucmap memo;
      
        for(const auto &x:s) memo[x]++;
        
        for(const auto &y:t) memo[y]--;
        
        for(auto z:memo) if(z.second>0||z.second<0) return false;
        return true;
        
    }
};