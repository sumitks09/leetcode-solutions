class Solution
{
    private:
       void subsets(vector<int> &x, int n, int k,int index ,vector<vector< int>> &ans,vector<int>&temp,int size)
        {
            if (index >= size)
            {
                if (temp.size() == k)
                {
                    ans.push_back(temp);
                }
                return;
            }

           	//include
            temp.push_back(x[index]);
            subsets(x, n, k, index + 1, ans, temp,size);
           	//exclude
            temp.pop_back();
            subsets(x, n, k, index + 1, ans, temp,size);
        }

    public:
        vector<vector < int>> combine(int n, int k)
        {
            vector<int> x;
            for (int i = 1; i <= n; i++)
            {
                x.push_back(i);
            }
                int size=x.size();
            vector<vector < int>> ans;
            vector<int> temp;
            subsets(x, n, k, 0, ans, temp,size);
           return ans;
        }
};