class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size()!=0 && s.find(part)<s.length())
        {
            size_t found=s.find(part);
            if(found!=string::npos)
            {
               s.erase(found,part.size()); 
            }
        }
        return s;
    }
};