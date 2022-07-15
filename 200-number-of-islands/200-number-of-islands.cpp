class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans+=1;
                    island(grid,i,j,m,n);
                }
            }
        }
        return ans;
    }
    void island(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        if(i<0||i>=m||j<0||j>=n||grid[i][j]=='0')
            return;
        
        grid[i][j]='0';
      island(grid,i+1,j,m,n);
         island(grid,i-1,j,m,n);
         island(grid,i,j+1,m,n);
         island(grid,i,j-1,m,n);
        return;
    }
};