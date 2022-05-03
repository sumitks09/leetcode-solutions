class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
            
        vector<int>ans(nums.begin(),nums.end());
            sort(ans.begin(),ans.end());
            
            int s=0;
            int e=ans.size()-1;
           
            while(s<ans.size()&&nums[s]==ans[s])
            {
                    s++;
            }
            while(e>s&&nums[e]==ans[e])
            {
                    e--;
            }
            return e+1-s;
    }
};