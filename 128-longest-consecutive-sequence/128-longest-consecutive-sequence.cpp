class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            /*
        sort(nums.begin(),nums.end());
            int count=1;
            int n=nums.size();
            if(n==0)
            {
                    return 0;
            }
            else if(n==1)
            {
                    return 1;
            }
            int largest=1;
            for(int i=1;i<nums.size();i++)
            {
                    if(nums[i]==nums[i-1]+1)
                    {
                            count++;
                            largest=max(largest,count);
                    }
                    else if(nums[i]==nums[i-1])
                    {
                            continue;
                    }
                    else
                    {
                            
                            count=1;
                    }
                    
            }
            return largest;
            */
            
            int mx=1;
            
            unordered_set<int>s;
            for(int i=0;i<nums.size();i++)
            {
                    s.insert(nums[i]);
            }
            if(s.size()==0)
            {
                    return 0;
            }
            
            
            for(auto i:s)
            {
                    if(s.find(i-1)==s.end())
                    {
                            int len=1;
                            int curr=i;
                            while(s.find(curr+1)!=s.end())
                            {
                                    curr=curr+1;
                                    len++;
                            }
                            mx=max(mx,len);
                    }
                    
            }
            return mx;
            
            
            
     
            
    }
};