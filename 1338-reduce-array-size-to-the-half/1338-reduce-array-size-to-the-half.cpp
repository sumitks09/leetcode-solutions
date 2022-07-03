class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        //Storing the frequencies of the number
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        priority_queue<int> pq;
        //Pushing the numbers into priority queue
        for(auto x:mp){
            pq.push(x.second);
        }
        int c=0,ans=0;
        //Finding maximum frequency until the sum of frequencies (c) becomes n/2-c<=0
        while(!pq.empty()){
            c+=pq.top();
            ans++;
            if(c>=n/2) break;
            pq.pop();
        }
        return ans;
    }
};