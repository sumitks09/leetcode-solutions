class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        vector<int>even,even1,odd,odd1;
        for(auto x:nums)
        {
            if(x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        
        for(auto x:target)
        {
            if(x%2==0)
            {
                even1.push_back(x);
            }
            else
            {
                odd1.push_back(x);
            }
        }
        
        long long count=0;
       for(int i =0;i<odd1.size();i++){
            if(odd[i]<odd1[i]){
                count+= ((odd1[i]-odd[i])/2);
            }
        }
         for(int i =0;i<even1.size();i++){
            if(even[i]<even1[i]){
                count+= ((even1[i]-even[i])/2);
            }
        }
        
        return count;
        
        
        
    }
};