class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>memo;
            for(int i=0;i<word1.size();i++)
            {
                    memo[word1[i]]++;
                    memo[word2[i]]--;
            }
            
            
            for(auto x:memo)
            {
                    if(abs(x.second)>3)
                    {
                            return false;
                    }
                    
            }
            return true;
            
            
            
    }
};