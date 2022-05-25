class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
            int mx=0;
            for(int i=0;i<nums.size();i++)
            {
                    s.insert(nums[i]);
            }
            
            for(auto i:s)
            {
                    if(s.find(i-1)==s.end())
                    {
                            int len=1;
                            int x=i;
                            while(s.find(x+1)!=s.end())
                            {
                                    len++;
                                    x+=1;
                                    
                            }
                            mx=max(mx,len);
                    }
                    
                    
            }
            return mx;
            
            
    }
};