class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s;
        int n=s.size();
        int k=0;
          while(k<s.size())
            {
            for(int i=0;i<n;i++) 
            {
                temp[(i-k+n)%n]=s[i];
            }
                  
                  k++;
                  
            if(temp==goal)
                return true;
          }      
        return false;    
        
    }
};