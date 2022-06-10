class Solution {
public:
    void generate(int index, int sum,int target, vector<int>&nums,vector<int>&temp, vector<vector<int>> &result)
    {
        if(sum==target)
        {
            result.emplace_back(temp);
        }
        else if(sum>target)
            return;
        else
        {
            while(index<nums.size())
            {
                temp.emplace_back(nums[index]);
                generate(index+1,sum+nums[index],target,nums,temp,result);
                temp.pop_back();
                while( index<nums.size()-1 && nums[index]==nums[index+1])index++;
                index++;
            }
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       vector<int> temp;
       vector<vector<int>> result;
       sort(candidates.begin(),candidates.end());
       generate(0,0,target,candidates,temp,result);
       return result;
    }
};