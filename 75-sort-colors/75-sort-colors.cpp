class Solution {
public:
    void sortColors(vector<int>& nums) {
            // dutch national flag 
            /*
            int low=0;
            int mid=0;
            int high=nums.size()-1;
            while(mid<=high)
            {
                    if(nums[mid]==0)
                    {
                            swap(nums[low++],nums[mid++]);
                    }
                    else if(nums[mid]==1)
                    {
                            mid++;
                    }
                    else
                    {
                            swap(nums[mid],nums[high--]);
                    }
            }
            */
            // counting sort
            int count1=0;
            int count2=0;
            int count3=0;
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]==0)
                    {
                            count1++;
                    }
                    else if(nums[i]==1){
                            count2++;
                    }
                    else
                    {
                            count3++;
                    }
                    
            }
            nums.clear();
            while(count1--)
            {
                    nums.emplace_back(0);
            }
            while(count2--)
            {
                    nums.emplace_back(1);
            }
            while(count3--)
            {
                    nums.emplace_back(2);
            }
        
    }
};