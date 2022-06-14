class Solution
{
    public:
        string kthDistinct(vector<string> &arr, int k)
        {
            map<string, int> memo;
            for (int i = 0; i < arr.size(); i++)
            {
                memo[arr[i]]++;
            }
            int n = arr.size();
            int p = 0;
            for (int i = 0; i < n; i++)
            {
                if (memo[arr[i]] == 1)
                {
                    p++;
                    if (p == k)
                    {
                        return arr[i];
                    }
                }
            }
            return "";
        }
};