class Solution {
public:
    int percentageLetter(string s, char letter) {
            float count=0;
            float den=s.size();
        for(int i=0;i<s.size();i++)
        {
                if(s[i]==letter)
                {
                        count++;
                }
        }
           
          int ans=(count*100)/den;
           
            return ans;
    }
};