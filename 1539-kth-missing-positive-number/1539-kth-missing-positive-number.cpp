class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int result=0;
        vector<int>ans;
        for(int i=1;i<=1000;i++)
        {
            ans.push_back(i);
        }
        
     map<int,int>memo;
        for(int i=0;i<arr.size();i++)
        {
            memo[arr[i]]++;
        }
        for(int i=0;i<ans.size();i++)
        {
            memo[ans[i]]++;
        }
        
        for(auto x:memo)
        {
            if(x.second==1)
            {
                count++;
                if(count==k)
                {
                    result=x.first;
                    break;
                }
            }
            else
            {
                continue;
            }
        }
        if(result==0)
        {
            k=k-count;
            result=1000+k;
        }
        return result;
        
        
    }
};