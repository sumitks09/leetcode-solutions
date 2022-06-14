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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>nums;
            vector<int>ans;
            stack<int>st;
            while(head!=nullptr)
            {
                    nums.push_back(head->val);
                    head=head->next;
            }
            
            for(int i=nums.size()-1;i>=0;i--)
            {
                    while(st.size()!=0 && st.top()<=nums[i])
                    {
                            st.pop();
                    }
                    if(st.size()==0)
                    {
                            ans.push_back(0);
                             st.push(nums[i]);
                    }
                    else
                    {
                            ans.push_back(st.top());
                            st.push(nums[i]);
                    }
                    
                    
            }
            reverse(ans.begin(),ans.end());
            return ans;
            
    }
};