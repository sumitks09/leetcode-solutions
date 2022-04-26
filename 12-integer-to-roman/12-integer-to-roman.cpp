class Solution {
public:
    string intToRoman(int num) {
        vector<string> symbols = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        
        string res;
        
        for(int i = values.size() - 1; i >= 0; i--) {
            int val = values[i];  string sym = symbols[i];
            if(num / val) {
                int count = num / val;
                while(count--)
                        res.append(sym);
                num = num % val;
            }
        }
        return res;
    }
};