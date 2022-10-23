//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        unordered_map<int,int>memo;
        int ps=0;
        int cnt=0;
        for(int i=0;i<N;i++)
        {
            ps+=Arr[i];
            if(ps==k)
            {
                cnt++;
            }
            if(memo.find(ps-k)!=memo.end())
            {
                cnt+=memo[ps-k];
            }
            memo[ps]++;
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends