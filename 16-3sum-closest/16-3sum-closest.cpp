class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestsum = nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++)
        {
            int start=i+1;
            int end=nums.size()-1;
            while(start<end)
            {
                int currentsum=nums[i]+nums[start]+nums[end];
                if(currentsum<target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
                if(abs(target-currentsum)<abs(target-closestsum)) closestsum=currentsum;
                
            }
        }
        return closestsum;
    }
};