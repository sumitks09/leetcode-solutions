class Solution {
public:
        int solve(vector<int>& nums,int target,int i,int j)
        {
                int ans=-1;
              if(j>=i)
              {
                    int mid=i+(j-i)/2;
                    
                 if(nums[mid]==target)
                 {
                         return mid;
                 }
                    if(nums[mid]>target)
                    
                   ans= solve(nums,target,i,mid-1);
                    if(ans!=-1)
               {
                   return ans;    
                      }
                    
                      ans=  solve(nums,target,mid+1,j);    
                    if(ans!=-1)
               {
                   return ans;    
                      }
            }
               
                return -1;
        }
    int search(vector<int>& nums, int target) {
            int i=0;
        int j=nums.size()-1;
       int ans=solve(nums,target,i,j);
            return ans;
            
    }
};

