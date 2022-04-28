class Solution {
        private:
        void solve(string digits,int index,string ans,vector<string>&output,string mapping[])
        {
         if(index>=digits.size())
         {
                 output.push_back(ans);
                 return;
        }
                int number=digits[index]-'0';
                string value=mapping[number];
                for(int i=0;i<value.size();i++)
                {
                        ans.push_back(value[i]);
                        solve(digits,index+1,ans,output,mapping);
                        ans.pop_back();
                }
        }
public:
    vector<string> letterCombinations(string digits) {
            string ans="";
            vector<string>output;
            if(digits.length()==0)
            {
                    return output;
            }
        
            string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            
            solve(digits,0,ans,output,mapping);
                    return output;
    }
};