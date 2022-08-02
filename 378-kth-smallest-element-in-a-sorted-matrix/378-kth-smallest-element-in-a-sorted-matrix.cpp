class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int size=matrix.size()*matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        k=size-k;
        while(k--)
        {
            pq.pop();
        }
        return pq.top();
    }
};