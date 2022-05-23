class Solution
{
        void mergesorted(vector<int> &nums, int i, int j)
{
    int m = i + ((j - i) / 2);
    int s = i;
    int e = m + 1;

    vector<int> temp;
    while (s <= m && e <= j)
    {
        if (nums[s] < nums[e])
        {
            temp.push_back(nums[s]);
            s++;
        }
        else
        {
            temp.push_back(nums[e]);
            e++;
        }
    }

    while (s <= m)
    {
        temp.push_back(nums[s]);
        s++;
    }
    while (e <= j)
    {
        temp.push_back(nums[e]);
        e++;
    }

    int k = 0;
    for (int idx = i; idx <= j; idx++)
    {
        nums[idx] = temp[k++];
    }
    return;
}
       public:
        void solve(vector<int> &nums, int i, int j)
        {
            if (i >= j)
            {
                return;
            }
            int m = i + ((j - i) / 2);
            solve(nums, i, m);
            solve(nums, m + 1, j);

            return mergesorted(nums, i, j);
        }
        
    public:
        void sortColors(vector<int> &nums)
        {
            int i = 0;
            int j = nums.size() - 1;
            solve(nums, i, j);
            
        }
};

