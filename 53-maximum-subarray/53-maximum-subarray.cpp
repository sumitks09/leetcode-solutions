class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            
        int largest=INT_MIN;
            int sum=0;
            /*
            for(int i=0;i<nums.size();i++)
            {
                    sum=0;
                    for(int j=i;j<nums.size();j++)
                    {
                            int temp=nums[j];
                           
                          sum+=temp;
                            largest=max(sum,largest);
                    }
            }
            return largest;
            */
            
            for(int i=0;i<nums.size();i++)
            {
                   
                    sum+=nums[i];
                  
                    largest=max(largest,sum);
                     if(sum<0)
                   {
                           sum=0;
                   }
            }
            return largest;
                    
    }
};

