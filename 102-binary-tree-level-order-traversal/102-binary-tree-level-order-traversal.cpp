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
    vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>>result;
            if(root==nullptr)
            {
                    return result;
            }
            queue<TreeNode*>s;
            s.push(root);
           
            while(!s.empty())
            {
                     int size=s.size();
                    vector<int>ans;
                    for(int i=0;i<size;i++)
                    {
                            
          TreeNode* node = s.front();
                       s.pop(); 
                            
                   if(node->left!=nullptr)
                   {
                      s.push(node->left);     
                   }
                  if(node->right!=nullptr)
                     {
           s.push(node->right);
                     }
                        ans.push_back(node->val);         
                    
                    }
                    result.push_back(ans); 
            }
           
            return result;
            
            
        
    }
};