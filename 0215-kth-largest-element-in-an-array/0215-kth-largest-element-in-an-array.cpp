class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        while(nums.size()!=0)
        {
            pq.push(nums.back());
            nums.pop_back();
        }
        while(k>1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};