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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(head->next==nullptr)
            {
                    return nullptr;
            }
        ListNode* curr=head;
             ListNode* temp=head;
            int totalnodes=0;
             int reqnodes=0;
            while(curr!=nullptr)
            {
                    totalnodes++;
                    curr=curr->next;
            }
           
           
          reqnodes=totalnodes-n;
            if(reqnodes==0)
        {
            return head->next;
        }
            while(reqnodes>1)
            {
                   
                 temp=temp->next;   
                     reqnodes--;
            }
            
            temp->next=temp->next->next;
            return head;
    }
};