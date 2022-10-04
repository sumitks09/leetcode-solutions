class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
         vector<int>maxr(n,0);
        vector<int>maxc(n,0);

        for(int i=0;i<n;i++)
        {
         for(int j=0;j<n;j++)
         {
             maxr[i]=max(grid[i][j],maxr[i]);
             maxc[j]=max(grid[i][j],maxc[j]);
         }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans+=min(maxr[i],maxc[j])-grid[i][j];
            }
        }
        return ans;
    }
};