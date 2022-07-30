class Solution {
    private:
    static bool cmp(const pair<int,int>&a , const pair<int,int>&b)
    {
        if(a.second==b.second) return a.first>b.first;
        return a.second>b.second;
    }
        
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size();
        vector<pair<int,int>>pq;
        sort(arr.begin(),arr.end());
        
         int median = arr[(arr.size() - 1)/ 2] ;
        for(int i=0;i<n;i++)
        {
            pq.push_back({arr[i],abs(arr[i]-median)});
        }
        sort(pq.begin(),pq.end(),cmp);
        vector<int>result;
        
        for(int i=0;i<k;i++)
        {
            result.push_back(pq[i].first);
        }
        return result;
            
    }
};