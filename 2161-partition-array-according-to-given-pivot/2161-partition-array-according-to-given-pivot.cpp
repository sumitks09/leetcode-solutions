class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       stable_partition(nums.begin() , nums.end(), [&](int x){
         return x <pivot;   
        });
        stable_partition(nums.begin() , nums.end(), [&](int x){
         return x <= pivot;   
        });
        return nums;
    }
};