class Solution {
public:
    int up(int current_row,int current_column,int m,int n,vector<vector<int>>&vec,vector<vector<int>>& obstacleGrid)
    {
        if(current_row>=m || current_column>=n)
            return 0;
        if(obstacleGrid[current_row][current_column]==1)
            return 0;
        if(current_row==m-1 && current_column==n-1)
            return 1;
        
        if(vec[current_row][current_column]!=-1)
            return vec[current_row][current_column];
        
        int forward=up(current_row,current_column+1,m,n,vec,obstacleGrid);
        int downward=up(current_row+1,current_column,m,n,vec,obstacleGrid);
       vec[current_row][current_column]=forward+downward;
         return forward+downward;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n= obstacleGrid[0].size();
       vector<vector<int>>vec(m+1,vector<int>(n+1,-1));
        
        return up(0,0,m,n,vec,obstacleGrid);
        
    }
};