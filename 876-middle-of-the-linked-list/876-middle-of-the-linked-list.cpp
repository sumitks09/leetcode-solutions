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
        int totalnodes(ListNode* temp)
        {
            int count=0;
                while(temp!=nullptr)
                {
                        count++;
                        temp=temp->next;
                }
                cout<<count<<endl;
                return count;
                
                
        }
        private:
        ListNode* midpoint(ListNode* head,int counternodes)
        {
               while(counternodes--)
               {
                       head=head->next;
               }
                return head;
        }
        
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr)
        {
                return nullptr;
        }
            ListNode* temp=head;
            
            int counternodes=totalnodes(temp);
            counternodes=counternodes/2;
            cout<<counternodes;
           ListNode* temp2= midpoint(head,counternodes);
            return temp2;
            
    }
};