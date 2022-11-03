class Solution {
    int fbs(vector<int>&nums,int target)
    {
        int i=0;
        int j=nums.size()-1;
        int r=-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]==target)
            {
                r=mid;
                j=mid-1;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
            else
            {
               
                 j=mid-1;
            }
        }
        return r;
    }
    int lbs(vector<int>&nums,int target)
    {
        int i=0;
        int j=nums.size()-1;
        int r=-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]==target)
            {
                r=mid;
                i=mid+1;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
            else
            {
               
                 j=mid-1;
            }
        }
        return r;

    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,0);
        res[0]=fbs(nums,target);
        res[1]=lbs(nums,target);
        return res;
    }
};