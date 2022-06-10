class Solution {
        void helper(vector<int>& candidates, vector<vector<int>>&ans, vector<int>&temp,int index,int target,int n)
        {
                if(index==n)
                {
                   if(target==0)
                   {
                           ans.push_back(temp);
                   }
                        return;
                }
                
                if(candidates[index]<=target)
                {
                        temp.push_back(candidates[index]);
                                helper(candidates,ans,temp,index,target-candidates[index],n);
                        temp.pop_back();
                }
                helper(candidates,ans,temp,index+1,target,n);
                
                
        }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
            vector<int>temp;
            int index=0;
            int n=candidates.size();
            helper(candidates,ans,temp,index,target,n);
            return ans;
    }
};