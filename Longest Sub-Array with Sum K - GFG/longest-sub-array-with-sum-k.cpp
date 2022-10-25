//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int nums[],  int n, int target) 
    { 
        int ps=0;
        unordered_map<int,int>memo;
        int minl=INT_MIN;
        //memo[0]=-1;
        for(int i=0;i<n;i++)
        {
            ps+=nums[i];
            if(ps==target)
            {
                minl=i+1;
            }
          else if(memo.find(ps-target)!=memo.end())
             {
                 
                 minl=max(minl,i-memo[ps-target]);
             }
             if(memo.find(ps)==memo.end())
             {
            memo[ps]=i;
        }
        }
        return (minl==INT_MIN)? 0:minl;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends