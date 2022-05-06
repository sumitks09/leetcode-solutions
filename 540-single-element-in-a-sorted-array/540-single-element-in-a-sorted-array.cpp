class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
             
            //first approach : -
      /*  for(int i=0;i<nums.size()-1;i+=2)
      {
           if(nums[i]!=nums[i+1])
        {
        return nums[i];
        }
        }
            return -1;
            */
            /*
            unordered_map<int,int>memo;
            for(int i=0;i<nums.size();i++)
            {
                    memo[nums[i]]++;
            }
            for(auto x:memo)
            {
                    if(x.second==1)
                    {
                            return x.first;
                    }
                    }
            return -1;
            */
            
            int i=0;
            int j=nums.size()-1;
            if(nums.size()==1)
            {
                    return nums[0];
            }
            while(i<=j)
            {
                    int mid=i+((j-i)/2);
                    if(mid%2==0)
                    {
                            if(nums[mid]==nums[mid+1])
                            {
                                    i=mid+1;
                                    
                            }
                            else
                            {
                                    j=mid-1;
                            }
                    }
                    if(mid%2==1)
                    {
                            if(nums[mid]==nums[mid-1])
                            {
                                    i=mid+1;
                            }
                            else
                            {
                                    j=mid-1;
                            }
                    }
                   
            }
             return nums[i];
    }
};