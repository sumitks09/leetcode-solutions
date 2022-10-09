class Solution {
public:
    int minPartitions(string n) {
      
        int ans=0;
        for(auto x:n)
        {
            ans=max((int)x-'0',ans);
        }
        return ans;
    }
};