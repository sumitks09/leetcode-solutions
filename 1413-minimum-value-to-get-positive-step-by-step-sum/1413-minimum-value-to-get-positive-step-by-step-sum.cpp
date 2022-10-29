class Solution {
    private:
    bool helper(int n,vector<int>nums)
    {
        int i=0;
        while(i<nums.size())
        {
            n+=nums[i];
            if(n<=0)
            {
                return false;
            }
            i++;
        }
        return true;
    }
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1;i<10000;i++)
        {
            if(helper(i,nums)==true)
            {
                return i;
            }
        }
        return -1;
    }
};