class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>res;
        res.push_back(0);
        int i=0;
        while(i<gain.size())
        {
        res.push_back(res.back()+gain[i]);
        i++;
        }
        return *max_element(res.begin(),res.end());
        
    }
};