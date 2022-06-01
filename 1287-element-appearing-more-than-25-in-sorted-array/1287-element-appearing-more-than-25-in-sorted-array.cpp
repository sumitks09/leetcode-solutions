class Solution
{
    public:
        int findSpecialInteger(vector<int> &arr)
        {
            int n = arr.size();

            int result = n *25 / 100;
cout<<result;
            unordered_map<int, int> memo;
            for (int i = 0; i < arr.size(); i++)
            {
                memo[arr[i]]++;
            }

            for (auto x: memo)
            {
                if (x.second > result)
                {
                    return x.first;
                }
            }
                
              return -1;  
        }
};