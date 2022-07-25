class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int>vec;
        vec.first=-1;
        vec.second=-1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(target==nums[i])
            {
                count++;
                if(count==1)
                {
                    vec.first=i;
                }
                if(count>=2)
                {
                    vec.second=i;
                    
                }
            }
        }
        if(vec.first!=-1 && vec.second==-1)
        {
            return {vec.first,vec.first};
        }
        if(vec.first==-1 && vec.second!=-1)
        {
            return {vec.second,vec.second};
        }
        return {vec.first,vec.second};
        
    }
};