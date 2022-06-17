// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        int count=0;
        unordered_map<int,int>memo;
        for(auto x:M)
        {
        set<int>set(x.begin(),x.end());
     for(auto i:set)
     {
         memo[i]++;
     }
     for(pair<int,int>itr:memo)
     {
         if(itr.second==N)
         {
             count++;
         }
     }
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends