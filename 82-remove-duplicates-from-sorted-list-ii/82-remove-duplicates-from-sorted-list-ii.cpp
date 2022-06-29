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
            
            ListNode* curr = head;
              ListNode* temp=new  ListNode(-1);
            ListNode* n = temp;
            
            map<int,int>memo;
            
           while(curr!=nullptr)
           {
               memo[curr->val]++;
               curr=curr->next;
           }
            
            for(auto x:memo)
            {
                if(x.second==1)
                {
                     ListNode *temp = new ListNode(x.first);
                    n->next=temp;
                    n=n->next;
                }
            }
            return temp->next;
            
            
        }
};
