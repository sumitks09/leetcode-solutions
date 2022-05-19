/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    private:
        TreeNode* helper(TreeNode *root)
        {
            if (root->left == nullptr)
            {
                return root->right;
            }
            if (root->right == nullptr)
            {
                return root->left;
            }
                
               TreeNode* rightchild=root->right;
                TreeNode* lastright=moveright(root->left);
                lastright->right=rightchild;
                return root->left;
        }

    private:
        TreeNode* moveright(TreeNode *root) {
                while(root->right!=nullptr)
                {
                        root=root->right;
                }
                return root;
        }

    public:
        TreeNode* deleteNode(TreeNode *root, int key)
        {
            if (root == nullptr)
            {
                return nullptr;
            }
            if (root->val == key)
            {
                return helper(root);
            }
            TreeNode *dummy = root;
                
                 while (root != NULL) {
            if (root->val > key) {
                if (root->left != NULL && root->left->val == key) {
                    root->left = helper(root->left);
                    break;
                } else {
                    root = root->left;
                }
            } else {
                if (root->right != NULL && root->right->val == key) {
                    root->right = helper(root->right);
                    break;
                } else {
                    root = root->right;
                }
            }
        }
        return dummy;
    }
                
        
};