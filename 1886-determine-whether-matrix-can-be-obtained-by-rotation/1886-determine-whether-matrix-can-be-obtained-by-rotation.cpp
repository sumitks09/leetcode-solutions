class Solution
{
    public:
        bool findRotation(vector<vector < int>> &mat, vector< vector< int>> &target)
        {
                 if(mat==target)         return true;
                int n=3;
                while(n--)
                {

            for (int i = 0; i < mat.size(); i++)
            {
                for (int j = 0; j < i; j++)
                {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for (int i = 0; i < mat.size(); i++)
            {
                reverse(mat[i].begin(), mat[i].end());
            }

            
                    if (mat == target)
                    {
                        return true;
                    }
               
                }
            return false;
        }
};

 /*
        int n=3;
        while(n--){
            for(int i=0;i<mat.size();i++){
                for(int j=i;j<mat[0].size();j++)
                    swap(mat[i][j],mat[j][i]);
            }
            for(int i=0;i<mat.size();i++)
                reverse(mat[i].begin(),mat[i].end());
            if(mat==target) return true;
        }
        return false;
  */


