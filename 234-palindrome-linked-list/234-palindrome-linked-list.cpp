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
        private:
        ListNode* reverselist(ListNode* head)
        {
                 if(head==nullptr)
                {
                        return head;
                }
            ListNode* prev=nullptr;
                ListNode* curr=head;
                ListNode* n=curr->next;
                while(curr!=nullptr)
                {
                        curr->next=prev;
                        prev=curr;
                        curr=n;
                        if(n!=nullptr)
                        {
                                n=n->next;
                        }
                }
                return prev;
        }
        ListNode* midpoint(ListNode* head)
        {
            ListNode* fast=head;
            ListNode* slow=head;
                
                while(fast->next!=nullptr && fast->next->next!=nullptr)
                {
                     fast=fast->next->next;
                        slow=slow->next;
                }
                return slow->next;
                
        }
        
public:
    bool isPalindrome(ListNode* head) {
             if(head==nullptr)
                {
                        return head;
                }
            ListNode* temp2=head;
       ListNode* curr= midpoint(temp2);
            ListNode* temp=reverselist(curr);
            
            bool flag=true;
            while(temp!=nullptr)
            {
            if(temp->val!=head->val)
            {
                    flag=false;
                    return flag;
            }
            else
            {
                    temp=temp->next;
                    head=head->next;
            }
            }
            return flag;
            
            
    }
};