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
   ListNode* mergeNodes(ListNode* head) {
		ListNode*temp=head;
		ListNode*newhead=NULL;
		ListNode*ans;
		while(temp!=NULL)
		{
			int sum=0;
			temp=temp->next;
			if(temp==NULL)
				break;
			while(temp->val!=0)
			{
				sum+=temp->val;
				temp=temp->next;
			}
			ListNode*node=new ListNode(sum);
			if(newhead==NULL)
			{
				newhead=node;
				ans=newhead;
			}
			else
			{
				newhead->next=node;
				newhead=node;

			}
		}
		return ans;
	}
};