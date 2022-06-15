// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string canJump(long long N) {
        
        long long ans=1;
        long long  temp=0;
        for(temp=0;temp<N;)
        {
            temp+=ans;
            ans=temp;
        }
        if(temp==N)
        {
            return "True";
        }
        return "False";
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.canJump(N) << endl;
    }
    return 0;
}  // } Driver Code Ends