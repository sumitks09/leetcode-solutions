class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>>ans(numrows);
            for(int i=0;i<numrows;i++)
            {
                    for(int j=0;j<=i;j++)
                    {
                            if(i==j || j==0)
                            {
                                    ans[i].push_back(1);
                            }
                            else
                            {
                                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                            }
                    }
            }
            return ans;
    }
};