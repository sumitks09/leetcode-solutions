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
       int length(ListNode* head)
       {
                if(head==nullptr)
            {
                    return 0;
            }
               int count=0;
               ListNode* temp=head;
               while(temp!=nullptr)
               {
                       temp=temp->next;
                       count++;
               }
          return count;
       }
        
    ListNode* deleteMiddle(ListNode* head) {
            if(head==nullptr)
            {
                    return nullptr;
            }
            ListNode* temp=head;
        int size=length(head);
            if(size==1)
            {
                    return nullptr;
            }
            int tempsize=size/2;
            while(tempsize>1)
            {
                    temp=temp->next;
                    tempsize--;
            }
            temp->next=temp->next->next;
            return head;
            
            
            
    }
};