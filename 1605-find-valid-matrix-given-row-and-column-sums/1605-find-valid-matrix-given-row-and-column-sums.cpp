class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>>A(rowSum.size(),vector<int>(colSum.size(),0));
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[0].size();j++)
            {
                A[i][j]=min(rowSum[i],colSum[j]);
                rowSum[i]-=A[i][j];
                colSum[j]-=A[i][j];
            }
        }
        return A;
    }
};