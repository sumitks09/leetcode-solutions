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
        ListNode* deleteDuplicates(ListNode *head)
        {
              if(head == NULL || head->next == NULL )
              {
                  return head;
              }
            
            
             ListNode* curr= new ListNode(-1);
             ListNode* temp=curr;
            
         map<int,int>memo;
            while(head!=nullptr)
            {
                memo[head->val]++;
                head=head->next;
            }
            
            for(auto x:memo)
            {
                if(x.second==1)
                {
                     ListNode* n=new ListNode(x.first);
                    curr->next=n;
                    curr=curr->next;
                }
            }
            return temp->next;
            
           
        }
};
