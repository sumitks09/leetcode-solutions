class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int count=1;
        while(n-- > 0)
        {
            count=count*(min(9,10-n))+1;
        }
        return count;
    }
};