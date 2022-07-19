class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows=34;
         vector<vector<int>>vec(numRows);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || i==j)
                {
                    vec[i].push_back(1);
                }
                else
                {
                    vec[i].push_back(vec[i-1][j-1]+vec[i-1][j]);
                }
            }
                
        }
        int temp=0;
        for(auto x:vec)
        {
            if(temp==rowIndex)
            {
                return x;
            }
            temp++;
        }
        return {-1,-1};
    }
};