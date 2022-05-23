class Solution {
public:
    vector<vector<int>> generate(int numsRows) {
        vector<vector<int>>ans(numsRows);
            for(int i=0;i<numsRows;i++)
            {
                    for(int j=0;j<=i;j++)
                    {
                    if(i==j || j==0)
                    {
                            ans[i].push_back(1);
                    }
                    else
                    {
                            ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
                    }
            }
            }
            return ans;
    }
};