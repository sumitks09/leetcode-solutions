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
    TreeNode* invertTree(TreeNode* root) {
            if(root==nullptr)
            {
return nullptr;
            }
   TreeNode* node=root;
            
           invertTree(node->left);    
           invertTree(node->right);
          
            TreeNode* ans=node->left;
            node->left=node->right;
            node->right=ans;
            
            return root;
            
            
    }
};