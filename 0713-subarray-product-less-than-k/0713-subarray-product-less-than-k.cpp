class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int j=0;
        int p=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            p=p*nums[i];
            while(p>=k && j<=i)
            {
                p=p/nums[j];
                j++;
            }
            cnt+=(i-j)+1;
        }
        return cnt;
    }
};