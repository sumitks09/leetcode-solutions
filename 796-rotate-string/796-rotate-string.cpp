class Solution {
public:
    bool rotateString(string s, string goal) {
        queue<char>s1;
             queue<char>s2;
            for(int i=0;i<s.size();i++)
            {
                    s1.push(s[i]);
            }
              for(int i=0;i<goal.size();i++)
            {
                    s2.push(goal[i]);
            }
            
            int k=goal.size();
            while(k--)
            {
                    char ch=s1.front();
                    s1.pop();
                    s1.push(ch);
                    if(s2==s1)
                    {
                            return true;
                    }
            }
            return false;
    }
};