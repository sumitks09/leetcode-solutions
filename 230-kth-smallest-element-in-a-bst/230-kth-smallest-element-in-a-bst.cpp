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
        void inorder(TreeNode* root,priority_queue<int,vector<int>,greater<int>>&minheap)
        {
                if(root==nullptr)
                {
                        return;
                }
                inorder(root->left,minheap);
                minheap.push(root->val);
                inorder(root->right,minheap);
        }
public:
    int kthSmallest(TreeNode* root, int k) {
            priority_queue<int,vector<int>,greater<int>>minheap;
            inorder(root,minheap);
            
            while(k>1)
            {
                    minheap.pop();
                    k--;
            }
            return minheap.top();
            
        
    }
};