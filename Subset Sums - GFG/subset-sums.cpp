// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    private:
    void helper(int index, vector<vector<int>>&ans, vector<int>&temp,vector<int> &arr,int N)
    {
        if(index>=N)
        {
            if(temp.size()>=1)
            {
            ans.push_back(temp);
            }
            return;
        }
        
        //include
        temp.push_back(arr[index]);
        helper(index+1,ans,temp,arr,N);
        //exclude
        temp.pop_back();
         helper(index+1,ans,temp,arr,N);
        
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<vector<int>>ans;
        vector<int>temp;
        
        helper(0,ans,temp,arr,N);
        
        vector<int>vi;
        vi.push_back(0);
        for(auto x:ans)
        {
            int temp2=0;
            temp2+=accumulate(x.begin(),x.end(),temp2);
            vi.push_back(temp2);
        }
        sort(vi.begin(),vi.end());
        return vi;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends