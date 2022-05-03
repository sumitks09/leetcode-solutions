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
public:
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
            solve(root,ans);
           set<int>s(ans.begin(),ans.end());
            set<int>:: iterator itr;
            int count=0;
            if(s.size()!=0)
            {
           for(itr=s.begin();itr!=s.end();++itr)
           {
                  
                   if(count==1)
                   {
                   int ans=*itr;
                   return ans;
                   }
                    count++;
           }
            }
            return -1;
    }
};