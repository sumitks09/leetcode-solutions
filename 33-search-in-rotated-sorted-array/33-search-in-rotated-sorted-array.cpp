class Solution {
    private:
    int twosearch(vector<int>& nums, int target,int i ,int j)
    {
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]==target)
            {
                return mid;
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
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
      int index = min_element(nums.begin(),nums.end()) - nums.begin();
        //cout<<index<<endl;
        int ans1=twosearch(nums,target,0,index-1);
        int ans2=twosearch(nums,target,index,nums.size()-1);
        
        if(ans1==-1&&ans2!=-1)
        {
            return ans2;
        }
        else
        {
            return ans1;
        }
        
        
        
        
        
        
    }
};