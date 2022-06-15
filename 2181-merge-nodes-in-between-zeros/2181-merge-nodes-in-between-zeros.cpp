/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    private:
        void insert(ListNode **root, int item)
        {
           ListNode* temp = new ListNode;
            temp->val = item;
            temp->next = *root;
            *root = temp;
        }
    private:
        ListNode* arrayToList(vector<int> &nums, int n)
        {
            ListNode *root = NULL;
            for (int i = n - 1; i >= 0; i--)
                insert(&root, nums[i]);
            return root;
        }

    public:
        ListNode* mergeNodes(ListNode *head)
        {
            vector<int> ans;
            vector<int> nums;
            ListNode *temp = head;
            while (temp != nullptr)
            {
                ans.push_back(temp->val);
                temp = temp->next;
            }

            int sum = 0;
            int i = 0;
            int j = i + 1;
            while (i != ans.size() - 1)
            {
                while (ans[j] != 0)
                {
                    sum += ans[j];
                    j++;
                }
                nums.push_back(sum);
                sum = 0;
                i = j;
                j = i + 1;
            }
            int n = nums.size();
            ListNode *curr = arrayToList(nums, n);
            return curr;
        }
};