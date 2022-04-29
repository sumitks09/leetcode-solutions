class Solution {
        private:
        void solve(string digits,int index,vector<string>&ans,string output,string mapping[])
        {
                if(index>=digits.size())
                {
                        ans.push_back(output);
                        return;
                }
                
                int number=digits[index]-'0';
                string value=mapping[number];
                for(int i=0;i<value.size();i++)
                {
                        output.push_back(value[i]);
                        solve(digits,index+1,ans,output,mapping);
                        output.pop_back();
                }
                
        }
public:
    vector<string> letterCombinations(string digits) {
            string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            vector<string>ans;
            if(digits.size()==0)
            {
                    return ans;
            }
            string output;
            solve(digits,0,ans,output,mapping);
            return ans;
        
    }
};