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
                int lh=height(root->left);
                int rh=height(root->right);
                return 1+max(lh,rh);
        }
        int solve(TreeNode* root,int depth)
        {
                if(root==nullptr)
            {
                    return 0;
            }
            int sum=0;
            if(root->left==nullptr && root->right==nullptr && depth==1)
            {
                    return root->val;
            }
            sum+=solve(root->left,depth-1);
            sum+=solve(root->right,depth-1);
                return sum;
        }
    int deepestLeavesSum(TreeNode* root) {
        int depth = height(root);
            int result=solve(root,depth);
            return result;
            
    }
};