class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int j=0;
        int mm=INT_MIN;
        int cnt=0;
        int cost=0;
        
        for(int i=0;i<s.size();i++)
        {
           cost+=abs(s[i]-t[i]);
            if(cost>maxCost)
            {
                while(j<=i && cost>maxCost)
                {
                int tempc=abs(s[j]-t[j]);
                cost=cost-tempc;
                    j++;
                 }
            }
            mm=max(mm,(i-j+1));
        }
        return mm;
        
    }
};