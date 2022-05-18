class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
             sort(nums2.begin(),nums2.end());
             vector<int>::iterator ip;
             vector<int>::iterator ip2;
            
             ip = unique(nums1.begin(), nums1.begin() + nums1.size());
            ip2= unique(nums2.begin(), nums2.begin() + nums2.size());
            nums1.resize(distance(nums1.begin(),ip));
            nums2.resize(distance(nums2.begin(),ip2));
            
            vector<int>ans;
                    
           unordered_map<int,int>memo;
            for(int i=0;i<nums1.size();i++)
            {
                    memo[nums1[i]]++;
            }
            for(int i=0;i<nums2.size();i++)
            {
                    memo[nums2[i]]++;
            }
            
            for(auto x:memo)
            {
                    if(x.second==2)
                    {
                        ans.push_back(x.first);    
                    }
            }
            return ans;
            
            
           
            
            
            
            
            
            
            
            
            
            
    }
};