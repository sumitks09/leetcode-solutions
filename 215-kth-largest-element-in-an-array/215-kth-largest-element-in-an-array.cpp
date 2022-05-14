class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //priority_queue<int,vector<int>,greater<int>>maxheap;
            priority_queue<int>maxheap;
            
            for(int i=0;i<nums.size();i++)
             {
                    
                    maxheap.push(nums[i]);
                 }
            
            while(k>1)
            {
                   
                    maxheap.pop();
                    k--;
            }
            int ans=maxheap.top();
            return ans;
           
            
            
            
    }
};