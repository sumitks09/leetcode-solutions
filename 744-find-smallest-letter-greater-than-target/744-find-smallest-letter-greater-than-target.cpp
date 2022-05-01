class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans=0;
            for(int i=0;i<letters.size();i++)
            {
                    ans=letters[i];
                    if(ans>int(target))
                    {
                            return ans;
                    }
            }
            return letters[0];
    }
};