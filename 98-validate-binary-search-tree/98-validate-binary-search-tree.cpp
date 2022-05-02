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
        void solve(TreeNode* root,vector<int>&ans)
        {
        if(root==nullptr)
        {
                return;
        }
                solve(root->left,ans);
                ans.push_back(root->val);
                solve(root->right,ans);
       
        }
        
        bool issorted(vector<int>&ans,int n)
        {
                
                for(int i=0;i<n-1;i++)
                {
                    if(ans[i]>=ans[i+1])
                    {
                            return false;
                    }
                }
                return true;
        }
public:
    bool isValidBST(TreeNode* root) {
            vector<int>ans;
            solve(root,ans);
            int n=ans.size();
            bool result=issorted(ans,n);
            return result;
        
    }
};