class Solution {
    private:
    void helper(vector<int>& candidates,int index,int target,vector<vector<int>>&result,vector<int>&vec)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                result.push_back(vec);
            }
            return;
        }
        if(candidates[index]<=target)
        {
            vec.push_back(candidates[index]);
            helper(candidates,index,target-candidates[index],result,vec);
            vec.pop_back();
        }
        helper(candidates,index+1,target,result,vec);
            
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        vector<vector<int>>result;
        vector<int>vec;
        helper(candidates,0,target,result,vec);
        return result;
    }
};