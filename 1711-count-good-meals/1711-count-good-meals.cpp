class Solution {
public:
    #define modu int(1e9+7)
    // For each element in the array we will be checking for the possible elements in the map so that by adding them we can get the sum equal to the power of 2
    // like for getting 2^0 ,2^1,2^2 .......2^21 we will be checking the elements present in the map
    
    int countPairs(vector<int>& d) {

        int n = d.size();
        int ans = 0;
        
        map<int,int>mp;
        for(int i = 0;i<n;i++){
            int t = 1;
            while(t<=pow(2,21)){
                if(mp.count(t-d[i])){
                    ans = (ans + mp[t-d[i]])%modu;
                    
                }
                t = t*2;
            }
            mp[d[i]]++; 
        }
        
        return ans = ans%modu;
    }
};