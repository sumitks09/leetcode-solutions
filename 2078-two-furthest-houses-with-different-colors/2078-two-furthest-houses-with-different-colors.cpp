class Solution {
public:
    int maxDistance(vector<int>& colors) {
            int n=colors.size();
            int x=0;
            int biggest=INT_MIN;
           for(int i=0;i<n;i++)
           {
                   for(int j=i+1;j<n;j++)
                   {
                           if(colors[i]!=colors[j])
                           {
                                   x=abs(i-j);
                                   biggest=max(biggest,x);
                            }
                   }
           }
            return biggest;
    }
};