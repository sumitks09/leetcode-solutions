//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
       int xi=0;
       for(int i=0;i<nums.size();i++)
       {
           xi=xi^nums[i];
       }
       int rb=xi & ~(xi-1);
       int x=0;
       int y=0;
       for(int i=0;i<nums.size();i++)
       {
           if(rb&nums[i])
           {
               x=x^nums[i];
           }
           else
           {
               y=y^nums[i];
           }
       }
       vector<int>ans;
       ans.push_back(x);
       ans.push_back(y);
       sort(begin(ans),end(ans));
       return ans;
       
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends