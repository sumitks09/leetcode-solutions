class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        
        queue<pair<string,int>>pq;
        unordered_set<string>st(wordList.begin(),wordList.end());
        pq.push({beginWord,1});
        st.erase(beginWord);
        while(!pq.empty())
        {
            string word=pq.front().first;
            int steps=pq.front().second;
            pq.pop();
            if(word==endWord) return steps;
            for(int i=0;i<word.size();i++)
            {
                char original = word[i];
                for(char ch='a' ; ch<='z' ; ch++)
                {
                    word[i]=ch;
                    if(st.find(word)!=st.end())
                    {
                        st.erase(word);
                        pq.push({word,steps+1});
                    }
                }
                word[i]=original;
            }
        }
        return 0;
        
    }
};