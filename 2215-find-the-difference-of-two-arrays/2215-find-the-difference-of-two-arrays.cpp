class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            vector<vector<int>>ans;
            vector<int>result,result2;
           map<int,int>memo;
             map<int,int>memo2;
            
            for(int i=0;i<nums1.size();i++)
            {
                    memo[nums1[i]]++;
            }
            for(int i=0;i<nums2.size();i++)
            {
                    memo2[nums2[i]]++;
            }
           for(auto x:memo)
           {
                   if(memo2.find(x.first)==memo2.end())
                   {
                           result.push_back(x.first);
                   }
           }
             for(auto x:memo2)
           {
                   if(memo.find(x.first)==memo.end())
                   {
                           result2.push_back(x.first);
                   }
           }
            ans.push_back(result);
            ans.push_back(result2);
            return ans;
            
            
            
    }
};