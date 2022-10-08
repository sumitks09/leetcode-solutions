class FindSumPairs {
    unordered_map<int,int>memo;
    vector<int>arr,arr2;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
       arr =nums1;
        arr2=nums2;
        for(auto x:arr2)
        {
            memo[x]++;
        }
    }
    
    void add(int index, int val) {
        memo[arr2[index]]--;
        arr2[index]+=val;
        memo[arr2[index]]++;
    }
    
    int count(int tot) {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(memo.find(tot-arr[i])!=memo.end()) count+=memo[tot-arr[i]];
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */