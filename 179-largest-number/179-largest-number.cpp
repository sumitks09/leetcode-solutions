class Solution {
    private:
    static bool cmp(string &s1,string &s2)
    {
        return ((s1+s2)>(s2+s1));
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        
        for(int i=0;i<nums.size();++i)
        {
            vec.push_back(to_string(nums[i]));
        }
        
        sort(vec.begin(),vec.end(),cmp);
        string temp="";
        for(int i=0;i<vec.size();i++)
        {
            temp+=vec[i];
        }
        if(vec[0]=="0")
        {
            return "0";
        }
        return temp;
    }
};