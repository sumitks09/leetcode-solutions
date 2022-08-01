class Solution {
    private:
    void helper(vector<int>& candidates,int target,int index,vector<vector<int>>&result,vector<int>&vec)
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
            helper(candidates,target-candidates[index],index,result,vec);
            vec.pop_back();
        }
         helper(candidates,target,index+1,result,vec);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>vec;
       
        helper(candidates,target,0,result,vec);
        return result;
    }
};