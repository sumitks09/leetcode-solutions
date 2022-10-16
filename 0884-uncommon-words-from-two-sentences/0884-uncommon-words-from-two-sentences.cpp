class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
         string word;
    unordered_map<string,int>memo;
    stringstream iss(s1);
    while (iss >> word)
        memo[word]++;
        
        
         string word2;
        stringstream iss2(s2);
    while (iss2 >> word2)
        memo[word2]++;
        
        
        
        vector<string>vec;
        
        for(auto x:memo)
        {
            if(x.second==1)
            {
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};