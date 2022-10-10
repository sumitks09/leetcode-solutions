class Solution {
public:
    string breakPalindrome(string s) {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                return s;
            }
                
        }
        if(s.size()<2) return "";
        s[s.size()-1]='b';
        return s;
    }
};