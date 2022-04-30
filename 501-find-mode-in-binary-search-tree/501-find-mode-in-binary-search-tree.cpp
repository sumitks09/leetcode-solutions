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
        void solve(vector<int>&ans,TreeNode* root)
        {
                
            ans.push_back(root->val);
            
            if(root->left!=nullptr)
            {
                   
                solve(ans,root->left);    
            }
            if(root->right!=nullptr)
            {
                    
                 solve(ans,root->right);
            }
        
        }
public:
    vector<int> findMode(TreeNode* root) {
            vector<int>ans;
            vector<int>result;
             solve(ans,root);
            
            
unordered_map<int,int>memo;
            for(auto x:ans)
            {
                    memo[x]++;
            }
            int largest=INT_MIN;
            
    for(auto i : memo)
    {
            largest=max(largest,i.second);
    }
           for(auto x:memo)
           {
                   if(x.second==largest)
                   {
                           result.push_back(x.first);
                   }
           }          
                    return result;
    }
};