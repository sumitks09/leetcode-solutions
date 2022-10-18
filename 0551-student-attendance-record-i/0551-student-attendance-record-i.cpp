class Solution {
public:
    bool checkRecord(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') c++;
            else if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            {
                return false;
            }
                
        }
        if(c>=2) return false;
        return true;
    }
};