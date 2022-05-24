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
        void inorder(vector<int> &ans,TreeNode* root)
        {
                if(root==nullptr)
                {
                        return;
                }
                inorder(ans,root->left);
                ans.push_back(root->val);
                inorder(ans,root->right);
        }
        
        TreeNode* helper(int start,int end,vector<int> &ans)
        {
             if(start>end)
           {
                   return nullptr;
           }
            
                  int mid=start+((end-start)/2);
                    TreeNode* root= new TreeNode(ans[mid]);
                 
            root->left=helper(start,mid-1,ans);
            root->right=helper(mid+1,end,ans);
                
                return root;
        }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
            inorder(ans,root);
           
           return helper(0,ans.size()-1,ans);
         
                    
                    
            
    }
};