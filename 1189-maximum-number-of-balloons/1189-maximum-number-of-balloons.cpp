class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map< char, int > freq;
        for(int i=0; i < text.length(); i++){
            freq [text[i]] ++;
        }
         return min(freq['b'],min(freq['a'],min(freq['n'],min(freq['l']/2,freq['o']/2))));
    }
};