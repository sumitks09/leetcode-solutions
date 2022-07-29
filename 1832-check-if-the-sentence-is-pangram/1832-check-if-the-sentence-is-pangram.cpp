#define ucmap unordered_map<char,int>memo
#define pb push_back

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int count=0;
        ucmap;
        
        for(auto x:sentence) memo[x]++;
        
        for(auto i:memo)  if(i.second>0) count++;
        if(count==26) return true;
        return false;

    }
};