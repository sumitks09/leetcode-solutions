class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int x=0;
        unordered_map<int,int>memo;
        int sum=0;
        int orisum=((nums.size()*(nums.size()+1))/2);
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
            memo[nums[i]]++;
            if(memo[nums[i]]==2)
            {
                x=nums[i];
            }
        }
        return {x,orisum-sum+x};
       
    }
};