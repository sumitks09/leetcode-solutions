class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
            vector<int>ans;
            set<int>result;
            
            for(int i=0;i<nums.size();i++)
            {
if(key==nums[i])
{
        ans.push_back(i);
}
            
            }
            
for(int i=0;i<nums.size();i++)
            {
                    for(int j=0;j<ans.size();j++)
                    {
                          if(abs(i-ans[j])<=k)
                          {
                                 result.insert(i);
                          }
                            
                    }                            
            }
           
            vector<int>result2(result.begin(),result.end());
            return result2;
        
    }
};