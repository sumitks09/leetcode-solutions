/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        vector<int> nextLargerNodes(ListNode *head)
        {
            stack<int> st;
            vector<int> ans;
            ListNode *temp = head;

            while (temp != nullptr)
            {
                ans.emplace_back(temp->val);
                temp = temp->next;
            }

            vector<int> result;
            int n = ans.size();
           
                 for(int i=ans.size()-1;i>=0;i--)
        {
            while(st.size()!=0 && st.top()<=ans[i])
            {
                st.pop();
            }
            if(st.size()==0)
                result.push_back(0);
            else
                result.push_back(st.top());
            st.push(ans[i]);
        }
                reverse(result.begin(),result.end());
            return result;
        }
};

  
