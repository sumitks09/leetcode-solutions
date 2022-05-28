// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int temp=0;
    int ans=0;
    int result=0;
    vector<int>ans2;
    
   while(n>0)
   {
       temp=n%10;
       if(temp==0)
       {
           temp=5;
       }
       ans=ans*10+temp;
       n=n/10;
   }
   
   
   while(ans>0)
   {
       temp=ans%10;
      
      ans2.push_back(temp);
       ans=ans/10;
   }
   for(int i=0;i<ans2.size();i++)
   {
       result=result*10+ans2[i];
   }
   return result;
   
}