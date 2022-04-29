// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    private:
    void solve(vector<vector<int>> &grid, vector<string>&ans,string &output,int x,int y,int n)
    {
        if(x<0||y<0||x>=n||y>=n)
        {
            return;
        }
        if(grid[x][y]==0)
        {
            return;
        }
        if(x==n-1 && y==n-1)
        {
            ans.push_back(output);
            return;
        }
        
        
        
        //x=row
        //y=column
        
        grid[x][y]=0;
        
        //down move
        output+="D";
        solve(grid,ans,output,x+1,y,n);
        output.pop_back();
        
        output+="U";
        //up move
        solve(grid,ans,output,x-1,y,n);
        output.pop_back();
        
        output+="R";
        //right move
        solve(grid,ans,output,x,y+1,n);
        output.pop_back();
        
        
        output+="L";
        //left move
        solve(grid,ans,output,x,y-1,n);
         output.pop_back();
        
        grid[x][y]=1;
        
        return;
        
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &grid, int n) {
        vector<string>ans;
        string output;
        int x=0;
        int y=0;
        solve(grid,ans,output,x,y,n);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends