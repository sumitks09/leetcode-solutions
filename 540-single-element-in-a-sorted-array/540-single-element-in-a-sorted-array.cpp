class Solution
{
    public:
        int singleNonDuplicate(vector<int> &nums)
        {
            int n = nums.size();
            /*
            for (int i = 0; i < n - 1; i+=2)
            {
                if (nums[i] != nums[i + 1])
                {
                    return nums[i];
                }
            }
            return nums[nums.size()-1];
        }
        */
/*
            unordered_map<int, int> memo;
            for (int i = 0; i < n; i++)
            {
                memo[nums[i]]++;
            }

            for (auto x: memo)
            {
                if (x.second == 1)
                {
                    return x.first;
                }
            }
            return -1;
        }
        */
                if(nums.size()==1)
                {
                        return 1;
                }
              int i=0;
                int j=n-1;
                int mid=0;
                while(i<=j)
                {
                        mid=(i+j)/2;
                        
                        if(mid%2==0)
                        {
                                if(nums[mid]==nums[mid+1])
                                {
                                     i=mid+1;   
                                }
                                else
                                {
                                        j=mid-1;
                                }
                        }
                        else
                        {
                                if(nums[mid]==nums[mid-1])
                                {
                                     i=mid+1;   
                                }
                                else
                                {
                                        j=mid-1;
                                }
                        }
                }
                return nums[i];
                
        }
};