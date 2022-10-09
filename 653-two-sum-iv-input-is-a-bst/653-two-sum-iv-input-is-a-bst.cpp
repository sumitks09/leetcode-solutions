/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    void helper(vector<int>&ans,TreeNode* root,unordered_map<int,int>&memo)
    {
        if(root==nullptr) return;
        helper(ans,root->left,memo);
        ans.push_back(root->val);
       // memo[root->val]++;
        helper(ans,root->right,memo);
    }        
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        unordered_map<int,int>memo;
        helper(ans,root,memo);
        
        for(int i=0;i<ans.size();i++)
        {
            if(memo.find(k-ans[i])!=memo.end())
            {
                return true;
            }
            memo[ans[i]]++;
        }
        return false;
    }
};