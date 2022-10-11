//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        queue<pair<string,int>>pq;
        set<string>St(wordList.begin(),wordList.end());
        St.erase(startWord);
        pq.push({startWord,1});
        while(!pq.empty())
        {
            string word=pq.front().first;
            int steps=pq.front().second;
            pq.pop();
            if(word==targetWord) return steps;
            for(int i=0;i<word.size();i++)
            {
                char original=word[i];
                for(char ch='a';ch<='z';ch++)
                {
                    word[i]=ch;
                    if(St.find(word)!=St.end())
                    {
                        St.erase(word);
                        pq.push({word,steps+1});
                    }
                }
                word[i]=original;
            }
        }
        return 0;
        
        
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends