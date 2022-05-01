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
        bool solve(TreeNode* root,long min=LONG_MIN,long  max=LONG_MAX)
        {
                if(root==nullptr)
                {
                        return true;
                }
                if(root->val<=min || root->val>=max)
                {
                        return false;
                }
                bool leftans=solve(root->left,min,root->val);
                bool rightans=solve(root->right,root->val,max);
                
                return leftans && rightans;
                
        }
        
public:
        
    bool isValidBST(TreeNode* root) {
            bool result=solve(root);
            return result;
    }
        
};

