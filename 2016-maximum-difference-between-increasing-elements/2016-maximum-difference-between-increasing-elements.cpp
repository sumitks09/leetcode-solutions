class Solution {
public:
    int maximumDifference(vector<int>& nums) {
            int x=0;
            int biggest=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
                for(int j=i+1;j<nums.size();j++)
                {
                if(i<j&&nums[i]<nums[j])
                {
                 x=abs(nums[i]-nums[j]);
             biggest=max(biggest,x);
                }
        }
    }
            if(biggest>0)
            {
                    return biggest;
            }
            return -1;
    }       
};