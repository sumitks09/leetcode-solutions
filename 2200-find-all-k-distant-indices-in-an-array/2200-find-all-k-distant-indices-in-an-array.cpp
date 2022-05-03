class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {

       
        set<int>st;  //create set for remove duplicate indexes
        
		
        for(int i=0;i<nums.size();i++)  //traverse the nums
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==key and abs(i-j)<=k)  //if condition true 
                    
                {
                    st.insert(i);  //insert into set
                    
                }
            }
        }
         vector<int>ans(st.begin(),st.end());  //copy elements of set to vector
        
        return ans;      //return ans
        
        
        
    }
};