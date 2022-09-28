class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        // filling impact of character's
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            mp[ch] = i;
        }
        // making of result
        vector<int> res;
        int prev = -1;
        int maxi = 0;
        
        for(int j = 0; j < s.size(); j++){
            maxi = max(maxi, mp[s[j]]);
            if(maxi == j){
                res.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return res;
    }
};