class Solution {
    private:
    int firstpos(vector<int>&nums,int target)
    {
        int i=0;
        int j=nums.size()-1;
        int result=-1;
        while(i<=j)
        {
            int mid=(i+(j-i)/2);
            if(nums[mid]==target)
            {
                result=mid;
                j=mid-1;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return result;
    }
    private:
    int lastpos(vector<int>&nums,int target)
    {
        int i=0;
        int j=nums.size()-1;
        int result=-1;
        while(i<=j)
        {
            
            int mid=(i+(j-i)/2);
            if(nums[mid]==target)
            {
                result=mid;
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
        return result;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,0);
        int n=nums.size();
        ans[0]=firstpos(nums,target);
        ans[1]=lastpos(nums,target);
        return ans;
    }
};