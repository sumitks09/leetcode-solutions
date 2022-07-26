class Solution {
    static bool cmp(int x,int y)
    {
        int temp1=__builtin_popcount(x);
        int temp2=__builtin_popcount(y);
        if(temp1==temp2)
        {
            return x<y;
        }
       
        return temp1<temp2;
        
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};

