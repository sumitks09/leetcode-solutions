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
        ListNode* solve(ListNode*head,bool &b)
        {
          if(!head)
            return head;

        ListNode*temp=head;
        int sum=0;
        
        while(temp)
        {
            sum+=temp->val;
            if(sum==0)
                break;
            temp=temp->next;
        }
         
         //only if sum=0 then delete till temp and return temp->next it would get connected with the 'head' which call this func
         if(sum==0)  
         {
             b=true;   //ek to aisa hai jo delete ho rha hai to true krdo 
             return temp->next;  
         }
        
    head->next=solve(head->next,b);
    return head;
    
}
ListNode* removeZeroSumSublists(ListNode* head) {
    
    while(true)   //tab tak solve kro jab tk ek b aisa pair jo delete hora hai
    {
        bool koi_to_delete_hua=false;
        head=solve(head,koi_to_delete_hua);
        
        if(koi_to_delete_hua==false or !head)
            break;  
    }
    return head;
}
    };