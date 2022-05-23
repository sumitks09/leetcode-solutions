class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {
            int count1 = 0;
            int count2 = 0;
            int count3 = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                {
                    count1++;
                }
                else if (nums[i] == 1)
                {
                    count2++;
                }
                else
                {
                    count3++;
                }
            }
            nums.clear();
            while (count1--)
            {
                nums.push_back(0);
            }
            while (count2--)
            {
                nums.push_back(1);
            }
            while (count3--)
            {
                nums.push_back(2);
            }
        }
};