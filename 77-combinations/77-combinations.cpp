#define pb push_back
#define dvi vector<vector<int>>
#define vi vector<int>
#define frn for(int i=1;i<=n;i++)

class Solution {
    private:
    void subsets(int n,vector<int>&vec,vector<vector<int>>&result,int current,vector<int>&nums)
    {
        if(current>=n)
        {
            if(vec.size()>=1)
            {
            result.push_back(vec);
            }
            return;
        }
        
        vec.pb(nums[current]);
        subsets(n,vec,result,current+1,nums);
        
        vec.pop_back();
        subsets(n,vec,result,current+1,nums);
        
        
    }
public:
    vector<vector<int>> combine(int n, int k) {
        dvi result;
        vi vec;
        vi nums;
        dvi result2;
        frn nums.push_back(i);
        subsets( n,vec,result,0,nums);
        for(const auto &x:result) if(x.size()==k) result2.push_back(x);
        return result2;
            
    }
};