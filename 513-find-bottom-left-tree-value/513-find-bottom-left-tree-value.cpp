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
public:
   
         void dfs(TreeNode* root, int curdep, int &maxdep, int &ans){
        if(root==NULL)
            return;
        
        dfs(root->left, curdep+1, maxdep, ans);
        if(curdep>maxdep){
            ans= root->val;
            maxdep= curdep;
        }
        
        dfs(root->right, curdep+1, maxdep, ans);
        return;
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int t=0;
        int ans= root->val;
        dfs(root, 0, t, ans);
        return ans;
    }
};