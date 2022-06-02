/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    private:
        int totalnodes(ListNode *head)
        {
            int count = 0;
            ListNode *temp = head;
            while (temp != nullptr)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }
    public:
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {
            int counter = totalnodes(head);
                if((counter-n)==0)
                {
                    return head->next;    
                }
            ListNode *curr = head;

            int nth_node = counter - n;
            while (nth_node>1) {
                    nth_node--;
                    curr=curr->next;
            }
                curr->next=curr->next->next;
                return head;
                
                
        }
};