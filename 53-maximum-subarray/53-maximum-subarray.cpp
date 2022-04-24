class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int largest=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            cs+=nums[i];
            largest=max(cs,largest);
            if(cs<0)
            {
                cs= 0;
            }
        }
        return largest;
        
    }
};