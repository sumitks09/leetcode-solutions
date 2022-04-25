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
        
        int leavessum(TreeNode* root,int depth)
        {
          int sum=0;
            if(root==nullptr)
            {
                    return 0;
            }
            if(root->left==nullptr && root->right==nullptr && depth==1 )
            {
                    return root->val;
            }
                sum+=leavessum(root->left,depth-1);
                sum+=leavessum(root->right,depth-1);
            return sum;
        }
        
    int deepestLeavesSum(TreeNode* root) {
            
            int depth=height(root);
            int ans= leavessum(root,depth);
            return ans;
            
            
    }
};