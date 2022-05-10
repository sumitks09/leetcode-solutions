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
    int height(TreeNode* root)
    {
        if(root==nullptr)
        {
                return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        return 1+max(lh,rh);
    }
    
    TreeNode* lca(TreeNode* root,int maxdepth)
    {
        if(root==nullptr)
        {
                return NULL;
        }
            
        if( maxdepth==1) 
        {
                return root;
        }
        
        TreeNode* left = lca(root->left,maxdepth-1);
        TreeNode* right = lca(root->right,maxdepth-1);
        
if(left && right) 
            return root;
        else return left ? left : right;
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==nullptr) 
                return NULL;
        int maxdepth = height(root);
        return lca(root,maxdepth);
    }
};