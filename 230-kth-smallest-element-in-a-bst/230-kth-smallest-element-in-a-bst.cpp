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
        void solve(TreeNode* root,int k,vector<int>&ans)
        {
        if(root==nullptr)
        {
                return;
        }
                solve(root->left,k,ans);
                ans.push_back(root->val);
                solve(root->right,k,ans);
        }
        
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
            solve(root,k,ans);
            sort(ans.begin(),ans.end());
            return ans[k-1];
            
    }
};