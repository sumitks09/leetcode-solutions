class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it=nums.begin();
            for(int i=1;i<nums.size();i++)
            {
                    if(nums[i]==nums[i-1])
                    {
                            nums.erase(it);
                            i--;
                            it--;
                    }
                    it++;
            }
            return nums.size();
    }
};