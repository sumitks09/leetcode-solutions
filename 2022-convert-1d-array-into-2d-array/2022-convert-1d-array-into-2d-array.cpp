class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
            vector<int>temp;
            if(m*n!=original.size())
            {
                    return ans;
            }
            for(int i=0;i<original.size();i++)
            {
                    temp.push_back(original[i]);
                    if(temp.size()==n)
                    {
                            ans.push_back(temp);
                            temp.clear();
                    }
            }
            return ans;
    }
};