class Solution {
public:
    bool isPalindrome(int x) {
        long long  temp,r;
        long long sum=0;
        temp=x;
         while(x>0)    
       {    
       r=x%10;    
        sum=(sum*10)+r;    
         x=x/10;    
     }  
        if(sum==temp)
        {
            return true;
        }
        else
            
        {
        return false;
    }
    }
};