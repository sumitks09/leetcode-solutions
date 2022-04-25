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
               int lh=1+ height(root->left);
                int rh=1+ height(root->right);
                return max(lh,rh);
                
        }
        
        int leavessum(TreeNode* root,int depth,int present)
        {
          int sum=0;
            if(root==nullptr)
            {
                    return 0;
            }
            if(root->left==nullptr && root->right==nullptr && depth==present )
            {
                    return root->val;
            }
                sum+=leavessum(root->left,depth,present+1);
                sum+=leavessum(root->right,depth,present+1);
            return sum;
        }
        
    int deepestLeavesSum(TreeNode* root) {
            
            int depth=height(root);
            int ans= leavessum(root,depth,1);
            return ans;
            
            
    }
};