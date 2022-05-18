class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>memo;
            vector<int>ans;
            for(int i=0;i<nums1.size();i++)
            {
                    memo[nums1[i]]++;
            }
            for(auto x:nums2)
            {
                    if(memo[x]>0)
                            ans.push_back(x);
                    memo[x]--;
            }
            return ans;
    }
};