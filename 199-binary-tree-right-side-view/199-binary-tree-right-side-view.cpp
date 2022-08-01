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
    void helper(TreeNode* root,vector<int>&ans,int current)
    {
        if(root==nullptr)
        {
            return ;
        }
        if(current==ans.size()) ans.push_back(root->val);
        helper(root->right,ans,current+1);
        helper(root->left,ans,current+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        helper(root,ans,0);
        return ans;
    }
};