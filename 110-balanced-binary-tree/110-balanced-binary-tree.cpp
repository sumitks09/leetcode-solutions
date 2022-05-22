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
        bool flag=true;
        private:
        int height(TreeNode* root)
        {
                if(root==nullptr)
                {
                        return 0;
                }
                
                int lh=height(root->left);
                int rh=height(root->right);
                
                 if(abs(lh-rh)>1)
                {
                        flag=false;
                         return 0;
                } 
                
                return max(lh,rh)+1;
        }
public:
    bool isBalanced(TreeNode* root) {
        height(root);
             return flag;
    }
};


/*class Solution {
private:
    int helper(TreeNode* root, bool &flag) {
        if(root == NULL)
            return 0;
        
        int left = helper(root->left, flag);
        int right = helper(root->right, flag);
        
        // checking for balance
        if(abs(left - right) > 1) {
            flag = false;
            return 0;
        }
        
        // calculating height
        return max(left, right) + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        
        helper(root, ans);
        
        return ans;
    }
};
*/
 

