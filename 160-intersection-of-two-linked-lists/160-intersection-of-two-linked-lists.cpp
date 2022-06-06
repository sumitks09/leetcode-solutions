/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
                
                
            ListNode *temp = headA;
            ListNode *temp2 = headB;
                
                int count1=0;
                int count2=0;
                
                while(temp!=nullptr || temp2!=nullptr)
                {
                        if(temp!=nullptr)
                        {
                                temp=temp->next;
                                count1++;
                        }
                        if(temp2!=nullptr)
                        {
                                temp2=temp2->next;
                                count2++;
                        }
                }
                
                
                
                int size=abs(count1-count2);
                
                while(size--)
                {
                        if(count1<count2)
                        {
                               
                                 headB=headB->next;
                        }
                        else
                        {
                          headA=headA->next;      
                        }
                }
                
                while(headA!=headB)
                {
                        headA=headA->next;
                        headB=headB->next;
                }
                return headB;
        }
};