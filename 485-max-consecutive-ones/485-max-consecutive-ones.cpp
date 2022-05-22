class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {
            int largest = 0;
            int count = 0;
                
            for (int i = 0; i < nums.size(); i++)
            {
                count = 0;
                for (int j = i; j < nums.size(); j++)
                {
                    if (nums[j] == 1)
                    {
                        count++;
                        largest = max(largest, count);
                    }
                    else
                    {
                        break;
                    }
                }
            }
            return largest;
        }
};