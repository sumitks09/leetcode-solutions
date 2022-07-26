#define ll long long
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n=nums.size();
	vector<pair<long,int>> vec;//vector to store <value,index> pair
	for(int i=0;i<n;i++) vec.push_back({nums[i],i});
	sort(vec.begin(),vec.end());//sort based on values
	for(int i=0;i<n;i++){
		//iterate from i+1th index to some j such that differnce of values (vec[j]-vec[i])<=t  
		for(int j=i+1;j<n and (vec[j].first*1LL-vec[i].first)<=t;j++){
			//if the absolute difference of indices <=k then required pair is found 
			if(abs(vec[j].second-vec[i].second)<=k) return true;
		}
	}
	return false;
    }
};