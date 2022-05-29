class Solution {
        private:
        int helper(int currrow,int currcol,vector<vector<int>>&dp,int m,int n)
        {
                if(currrow==m || currcol==n)
                {
                        return 0;
                }
                if(currrow==m-1&&currcol==n-1)
                {
                        return 1;
                }
                if(dp[currrow][currcol]!=0)
                {
                        return dp[currrow][currcol];
                }
                int forward=helper(currrow+1,currcol,dp,m,n);
                int downward=helper(currrow,currcol+1,dp,m,n);
                return dp[currrow][currcol]=forward+downward;
        }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
            return helper(0,0,dp,m,n);
    }
};