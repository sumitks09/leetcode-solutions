class Solution {
public:
    bool isAnagram(string s, string t) {
        const int x=1e7+5;
        vector<int>vec(x,0);
        for(auto x:s)
        {
            vec[x]++;
        }
        for(auto x:t)
        {
            vec[x]--;
        }
        for(int i=0;i<x;i++)
        {
            if(vec[i]!=0 || vec[i]<0)
            {
                return false;
            }
        }
        return true;
    }
};