class Solution {
public:
    string arrangeWords(string text) {
         text[0]+=('a'-'A');
        vector<pair<string,int>>pv;
        int index=0;
        string ans="";
        stringstream ss(text);
        string word;
        while(ss>>word) pv.emplace_back(word,index++);
       sort(pv.begin(), pv.end(), [](auto& a, auto& b){ return (a.first.size() < b.first.size() )||  ( a.first.size() == b.first.size() &&  a.second < b.second); }); 
        for(auto x:pv)
        {
            ans+=x.first+" ";
        }
        ans.pop_back();
        ans[0]-=('a'-'A');
        return ans;
    }
};