class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;i++)
        {
                if(nums[i]==1)
                {
                       int x=k+i;
                        for(int j=i+1;j<=x;j++)
                        {
if(nums[j]==1)
        
{
        return false;
}
                        
                        }
                }
        }
            return true;
    }
};