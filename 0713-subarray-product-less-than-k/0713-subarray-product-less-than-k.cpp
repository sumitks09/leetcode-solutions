class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cn=0;
    
        int pro=1; // to store product
        
        int j=0,i=0,n=nums.size();
        
        
        while(i<n)
        {
            pro=pro*nums[i];
                
            while(pro>=k and  j<=i) // when product is greater than k then until it gets less we increment j and decrease product with nums[i] dividing 
            {
                pro=pro/nums[j];
                j++;
            }
            cn=cn+(i-j)+1;    
            i++;
        }
        return cn;
    }
};