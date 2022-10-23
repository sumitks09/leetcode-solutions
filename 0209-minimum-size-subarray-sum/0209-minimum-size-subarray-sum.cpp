class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int minl=INT_MAX;
        int csum=0;
        int i=0,j=0;
        int n = nums.size();
        while(i<n)
        {
            csum+=nums[i++];
                while(csum>=k)
                {
                    minl=min(minl,i-j);
                    csum-=nums[j++];         
                }
             }
         return minl == INT_MAX ? 0 : minl;
    }
};
