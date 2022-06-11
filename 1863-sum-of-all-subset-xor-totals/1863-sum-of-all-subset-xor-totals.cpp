class Solution {
void  helper(vector<int>&nums,int index,int n,int x,int &ans)
        {
                if(index==n)
                {
                        ans+=x;
                        return ;
                }
                
                helper(nums,index+1,n,x^nums[index],ans);
                helper(nums,index+1,n,x,ans);        
        }
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
            int n=nums.size();
            int index=0;
            int x=0;
            helper(nums,index,n,x, ans);
             return ans;
    }
};


