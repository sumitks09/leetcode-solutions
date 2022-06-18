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
    public:
        ListNode* partition(ListNode *head, int x)
        {
            ListNode *head1 = new ListNode(0);
            ListNode *head2 = new ListNode(0);
            ListNode *h1 = head1;
            ListNode *h2 = head2;
            while (head!=nullptr)
            {
                if(head->val<x)
                {
                    h1->next=head;
                    h1=h1->next;
                }
                else
                {
                    h2->next=head;
                    h2=h2->next;
                }
                head=head->next;
                
            }
            
            h2->next=nullptr;
           h1->next=head2->next;
            head=head1->next;
            return head;
           
            
        }
};