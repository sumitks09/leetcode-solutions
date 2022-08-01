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
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if(head==nullptr)
        {
            return nullptr;
        }
        int count=0;
        ListNode* temp=head;
        ListNode* temp2=head;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        if(count==1) return nullptr;
        
        int mid=count/2;
        while(mid>1)
        {
            temp2=temp2->next;
            mid--;
        }
        temp2->next=temp2->next->next;
        return head;
    }
};