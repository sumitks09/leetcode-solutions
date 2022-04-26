class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int>s(nums1.begin(),nums1.end());
         set<int>s2(nums2.begin(),nums2.end());
          set<int>s3(nums3.begin(),nums3.end());
         unordered_map<int,int>memo;
            vector<int>ans;
            for(auto x:s)
            {
                 memo[x]++;   
            }
            
            for(auto x:s2)
            {
                 memo[x]++;   
            }
            for(auto x:s3)
            {
                 memo[x]++;   
            }
            
            for(auto i:memo)
            {
                    if(i.second>=2)
                    {
                            ans.push_back(i.first);
                    }
            }
            return ans;
            
            
    }
};