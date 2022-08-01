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
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* temp=head;
        ListNode* temp2=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        if(count==n) return head->next;
       int oricount=count-n;
        while(oricount>1)
        {
            temp2=temp2->next;
            oricount--;
        }
        temp2->next=temp2->next->next;
        return head;
        
        
        
    }
};