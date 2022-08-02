class Solution {
    private:
    void helper(vector<int>vec,int k,string &s,int n)
    {
        for(int i=1;i<=n;i++)
            vec.push_back(i);
        int count=1;
        
        do{
            if(count==k)
            {
            for(int i=0;i<vec.size();i++)
            {
                s+=to_string(vec[i]);
            }
            }
            count++;
        }
        while(next_permutation(vec.begin(),vec.end()));
    }
public:
    string getPermutation(int n, int k) {
        vector<int>vec;
     
        string s="";
        
        helper(vec,k,s,n);
       
        return s;
            
    }
};