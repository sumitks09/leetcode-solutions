/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
/*
    private:
        int totalnodes(TreeNode *root, int &count)
        {
            if (root == nullptr)
            {
                return 0;
            }
            count++;
            totalnodes(root->left, count);
            totalnodes(root->right, count);
            return count;
        }

    int sum(TreeNode *root, int &x)
    {
        if (root == nullptr)
        {
            return 0;
        }
        x += root->val;
        sum(root->left, x);
        sum(root->right, x);
        return x;
    }

    public:
        bool isUnivalTree(TreeNode *root)
        {
            int count=0;
                int x = 0;
               
            int totaln = totalnodes(root, count);
            int addup = sum(root, x);

            int temp = root->val;
                int temp2=temp*totaln;
                if(temp2==addup)
                {
                        
                        return true;
                }
                
                return false;
                */
        
        private:
        bool ans(TreeNode *root,int temp)
        {
             bool ans1=true;
                 bool ans2=true;
                 if(root==nullptr)
                 {
                         return true;
                 }
        
                 if(root->val!=temp)
                 {
                         return false;
                 }
                 
                 ans1=ans(root->left,temp);
                 ans2=ans(root->right,temp);
                 return ans1&&ans2;   
        }
        
        public:
         bool isUnivalTree(TreeNode *root)
        {
              int temp=root->val;
                 return ans(root,temp);
                 
        
        
        }
};