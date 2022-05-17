/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */

class Solution
{
    private:
        void copyc(TreeNode *original, TreeNode *cloned, TreeNode *target,TreeNode * &ans) {
            if(cloned==nullptr)
            {
                    return;
            }
            
            if(cloned->val==target->val)
            {
                    ans=cloned;
                    
            }
            copyc(original,cloned->left,target,ans);
            copyc(original,cloned->right,target,ans);
        }
    public:
        TreeNode* getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
                 TreeNode* ans=nullptr;
                copyc(original,cloned,target,ans);
                return ans;
        }
};