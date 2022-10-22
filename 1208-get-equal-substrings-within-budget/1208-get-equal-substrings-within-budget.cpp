class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
          int i=0;
          int j=0;
          int cost=0;
        int mm=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            cost+=abs(s[i]-t[i]);
            if(cost>maxCost)
            while(j<=i && cost>maxCost)
            {
                int prevcost=abs(s[j]-t[j]);
                cost=cost-prevcost;
                j++;
            }
            mm=max(mm,i-j+1);
            cout<<i-j+1<<endl;
        }
         return (mm == INT_MIN) ? 0 : mm;
    }
};



     