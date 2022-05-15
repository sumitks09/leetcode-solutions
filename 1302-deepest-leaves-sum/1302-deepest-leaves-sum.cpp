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
        int depth(TreeNode* root)
        {
           if(root==nullptr)
           {
                   return 0;
           }
                int lh=1+depth(root->left);
                int rh=1+depth(root->right);
                return max(lh,rh);
             }
        private:
        void summision(TreeNode* root,int height,int &sum)
        {
                if(root==nullptr)
                {
                        return;
                }
             if(root->left==nullptr&&root->right==nullptr&&height==1)
            {
                    sum+=root->val;
            }
                summision(root->left,height-1,sum);
                summision(root->right,height-1,sum);
                
        }
public:
    int deepestLeavesSum(TreeNode* root) {
            int sum=0;
            int height=depth(root);
            summision(root,height,sum);
            return sum;
        
    }
};