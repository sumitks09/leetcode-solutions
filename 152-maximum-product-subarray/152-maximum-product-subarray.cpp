class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int minPro=nums[0], maxPro=nums[0], res=nums[0];
		int temp1, temp2;
		for(int i=1; i<nums.size(); i++) {
			temp1=minPro*nums[i];
			temp2=maxPro*nums[i];
			minPro=min(nums[i], min(temp1, temp2));
			maxPro=max(nums[i], max(temp1, temp2));
			res=max(res, maxPro);
		}
		return res;
    }
};