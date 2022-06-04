/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* reverselist(ListNode *head)
        {
            if (head == nullptr)
            {
                return head;
            }
            ListNode *prev = nullptr;
            ListNode *curr = head;
            ListNode *n = curr->next;
            while (curr != nullptr)
            {
                curr->next = prev;
                prev = curr;
                curr = n;
                if (n != nullptr)
                {
                    n = n->next;
                }
            }
            return prev;
        }
    bool isPalindrome(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *midp = slow->next;
        ListNode *mid = reverselist(midp);
        while (mid != nullptr)
        {
            if (head->val != mid->val)
            {
                return false;
            }
            else
            {
                head = head->next;
                mid = mid->next;
            }
        }
        return true;
    }
};