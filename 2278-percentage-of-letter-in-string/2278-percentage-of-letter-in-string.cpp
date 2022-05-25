class Solution {
public:
    int percentageLetter(string s, char letter) {
            int count=0;
        for(int i=0;i<s.size();i++)
        {
                if(letter==s[i])
                {
                        count++;
                }
        }
            
            int ans=((count*100/s.size()));
            return ans;
        
    }
};