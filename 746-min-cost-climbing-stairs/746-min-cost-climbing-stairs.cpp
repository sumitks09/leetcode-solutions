class Solution {
public:
    int mcs(int current,vector<int>&cost,unordered_map<int,int>&memo)
    {
        if(current>=cost.size())
            return 0;
        int current_key=current;
        if(memo.find(current_key)!=memo.end())
            return memo[current_key];
        int onesteps=cost[current]+mcs(current+1,cost,memo);
        int twosteps=cost[current]+mcs(current+2,cost,memo);
        memo[current_key]=min(onesteps,twosteps);
        return memo[current_key];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>memo;
        int zero=mcs(0,cost,memo);
        int one=mcs(1,cost,memo);
        return min(zero,one);
        
    }
};