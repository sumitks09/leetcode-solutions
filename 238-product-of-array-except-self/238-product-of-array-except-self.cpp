class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> result;
        
        result.push_back(1);
        int i=1;
        while(i<n) {
            int temp=result[i-1]*nums[i-1];
            
            result.push_back(temp);
            i++;
        }
        
        i--;
        int temp=nums[i];
        i--;
        while(i>=0) {
            result[i]*=temp;
            
            temp*=nums[i];
            
            i--;
        }
        
        return result;
    }
};