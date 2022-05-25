class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int count=1;
            int n=nums.size();
            if(n==0)
            {
                    return 0;
            }
            else if(n==1)
            {
                    return 1;
            }
            int largest=1;
            for(int i=1;i<nums.size();i++)
            {
                    if(nums[i]==nums[i-1]+1)
                    {
                            count++;
                            largest=max(largest,count);
                    }
                    else if(nums[i]==nums[i-1])
                    {
                            continue;
                    }
                    else
                    {
                            
                            count=1;
                    }
                    
            }
            return largest;
    }
};