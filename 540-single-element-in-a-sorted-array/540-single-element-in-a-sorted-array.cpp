class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            /*
            unordered_map<int,int>memo;
            for(int i=0;i<nums.size();i++)
            {
                    memo[nums[i]]++;
            }
            
            for(auto x:memo)
            {
                    if(x.second==1)
                    {
                            return x.first;
                    }
            }
            return -1;
            */
            
            
           
            for(int i=0;i<nums.size()-1;i+=2)
            {
                    if(nums[i]!=nums[i+1])
                    {
                            return nums[i];
                    }
            }
            return nums[nums.size()-1];
        
    }
};