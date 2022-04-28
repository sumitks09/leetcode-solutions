class Solution {
public:
        int solve(vector<int>& nums,int target)
        {
              int i=0;
        int j=nums.size()-1;
            while(i<=j)
            {
                    int mid=i+((j-i)/2);
                    
                 if(target==nums[mid])
                 {
                         return mid;
                 }
                    else if(target<nums[mid])
                    {
                            j=mid-1;
                    }
                    else
                    {
                            i=mid+1;
                    }
                    
            }
                return -1;
        }
    int search(vector<int>& nums, int target) {
       return solve(nums,target);
            
    }
};