/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            if (headA == nullptr)
            {
                return nullptr;
            }
            int size1 = 0;
            int size2 = 0;
            ListNode *temp = headA;
            ListNode *temp2 = headB;
            while (temp != nullptr)
            {
                size1++;
                temp = temp->next;
            }
            while (temp2 != nullptr)
            {
                size2++;
                temp2 = temp2->next;
            }

            int plus = abs(size1 - size2);

                while(plus--)
                {
            if (size1 < size2)
            {
                headB = headB->next;
                    
            }
            else
            {
                headA = headA->next;
            }
                }

            while (headA != headB)
            {
                headA = headA->next;
                headB = headB->next;
            }
            return headB;
        }
};