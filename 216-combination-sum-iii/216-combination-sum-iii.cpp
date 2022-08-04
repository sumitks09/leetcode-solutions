class Solution {
public:    
    void solve(int i,vector<vector<int>> &ans,vector<int> &curr,int k,int n)
    {
        if(curr.size() == k and n==0){
            ans.push_back(curr);
            return;
        }
        if(i>9 || n<0){
            return;
        }
        curr.push_back(i);
        solve(i+1,ans,curr,k,n-i);
        curr.pop_back();
        solve(i+1,ans,curr,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        solve(1,ans,curr,k,n);
        return ans;
    }
};