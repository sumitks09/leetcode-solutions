#define pb push_back
#define vpii vector<pair<int,int>>
#define vi vector<int>
class Solution {
    private:
    
    static bool cmp(const pair<int,int>&x1,const pair<int,int>&x2)
    { 
        if(x1.second==x2.second) return x1.first>x2.first;
       return x1.second>x2.second;
        
    }
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        auto n=arr.size();
        sort(arr.begin(),arr.end());
        auto median=arr[((n-1)/2)];
        vpii pq;
        vi vec;
        for(const auto &x:arr)
        {
            pq.pb({x,abs(x-median)});
        }
        sort(pq.begin(),pq.end(),cmp);
        for(int i=0;i<k;i++)
        {
            vec.pb(pq[i].first);
        }
        return vec;
        
    }
};