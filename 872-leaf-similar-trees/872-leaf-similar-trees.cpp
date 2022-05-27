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
        void helper1(TreeNode* root,vector<int>& ans)
        {
                if(root==nullptr)
                {
                        return;
                }
                
                if(root->left==nullptr && root->right==nullptr)
                {
                        ans.push_back(root->val);
                        return;
                }
                helper1(root->left,ans);
                helper1(root->right,ans);
                
                
        }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
            vector<int>ans1;
            vector<int>ans2;
            helper1(root1,ans1);
            helper1(root2,ans2);
            if(ans1==ans2)
            {
                    return true;
            }
            return false;
            
    }
};